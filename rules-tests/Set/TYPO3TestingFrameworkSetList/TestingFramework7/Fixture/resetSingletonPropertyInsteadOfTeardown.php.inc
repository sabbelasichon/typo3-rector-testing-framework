<?php
declare(strict_types=1);

namespace Ssch\Typo3RectorTestingFramework\Tests\Set\TYPO3TestingFrameworkSetList\TestingFramework7\Fixture;

use TYPO3\TestingFramework\Core\Functional\FunctionalTestCase;
use TYPO3\TestingFramework\Core\Unit\UnitTestCase;

final class ResetSingletonInsteadOfTeardownTestCase extends UnitTestCase
{
    protected function tearDown(): void
    {
        echo "Not related function call";
        $this->resetSingletonInstances = true;
    }
}

?>
-----
<?php
declare(strict_types=1);

namespace Ssch\Typo3RectorTestingFramework\Tests\Set\TYPO3TestingFrameworkSetList\TestingFramework7\Fixture;

use TYPO3\TestingFramework\Core\Functional\FunctionalTestCase;
use TYPO3\TestingFramework\Core\Unit\UnitTestCase;

final class ResetSingletonInsteadOfTeardownTestCase extends UnitTestCase
{
    protected bool $resetSingletonInstances = true;

    protected function tearDown(): void
    {
        echo "Not related function call";
    }
}

?>