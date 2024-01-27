<?php
declare(strict_types=1);

namespace Ssch\Typo3RectorTestingFramework\Tests\Set\TYPO3TestingFrameworkSetList\TestingFramework7\Fixture;

use TYPO3\TestingFramework\Core\Unit\UnitTestCase;

final class MyTestClass extends UnitTestCase
{
    protected $resetSingletonInstances = false;
}

?>
-----
<?php
declare(strict_types=1);

namespace Ssch\Typo3RectorTestingFramework\Tests\Set\TYPO3TestingFrameworkSetList\TestingFramework7\Fixture;

use TYPO3\TestingFramework\Core\Unit\UnitTestCase;

final class MyTestClass extends UnitTestCase
{
    protected bool $resetSingletonInstances = false;
}

?>
