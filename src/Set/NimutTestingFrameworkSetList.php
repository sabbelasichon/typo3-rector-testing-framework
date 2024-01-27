<?php

declare(strict_types=1);

namespace Ssch\Typo3RectorTestingFramework\Set;

use Rector\Set\Contract\SetListInterface;

final class NimutTestingFrameworkSetList implements SetListInterface
{
    public const NIMUT_TESTING_FRAMEWORK_TO_TYPO3_TESTING_FRAMEWORK = __DIR__ . '/../../config/sets/nimut-testingframework/nimut-testing-framework-to-typo3-testing-framework.php';
}
