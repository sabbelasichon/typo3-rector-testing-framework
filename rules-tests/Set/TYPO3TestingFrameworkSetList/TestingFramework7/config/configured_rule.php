<?php

declare(strict_types=1);

use Rector\Config\RectorConfig;
use Ssch\Typo3RectorTestingFramework\Set\TYPO3TestingFrameworkSetList;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->sets([
        TYPO3TestingFrameworkSetList::TYPO3_TESTING_FRAMEWORK_7,
        TYPO3TestingFrameworkSetList::RESET_SINGLETON_PROPERTY_INSTEAD_OF_TEARDOWN,
    ]);
};
