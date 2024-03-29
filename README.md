# Rector Rules for TYPO3 Testing Framework

## Install

All you need to do is install the package, and you're good to go:

```bash
composer require ssch/typo3-rector-testing-framework --dev
```

## Use Sets

To add a set to your config, use one of the classes from sets under `Ssch\\Typo3RectorTestingFramework\\Set\\` class and pick one of the constants:

```php
use Ssch\Typo3RectorTestingFramework\Set\NimutTestingFrameworkSetList;
use Ssch\Typo3RectorTestingFramework\Set\TYPO3TestingFrameworkSetList;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->sets([
        NimutTestingFrameworkSetList::NIMUT_TESTING_FRAMEWORK_TO_TYPO3_TESTING_FRAMEWORK,
        TYPO3TestingFrameworkSetList::TYPO3_TESTING_FRAMEWORK_7,
    ]);
};
```