// FUN_01443174 @ 01443174 size=152 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01443174(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  
  uVar18 = (**(code **)(param_1[0x11] + 0xc))(param_1[0x10]);
  uVar4 = param_1[8];
  uVar8 = param_1[9];
  uVar12 = param_1[10];
  uVar14 = param_1[0xb];
  uVar5 = param_1[0xc];
  uVar9 = param_1[0xd];
  uVar13 = param_1[0xe];
  uVar15 = param_1[0xf];
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar10 = param_1[2];
  uVar16 = param_1[3];
  uVar3 = param_1[4];
  uVar7 = param_1[5];
  uVar11 = param_1[6];
  uVar17 = param_1[7];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x48);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x48);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar6;
  puVar1[2] = uVar10;
  puVar1[3] = uVar16;
  puVar1[4] = uVar3;
  puVar1[5] = uVar7;
  puVar1[6] = uVar11;
  puVar1[7] = uVar17;
  puVar1[8] = uVar4;
  puVar1[9] = uVar8;
  puVar1[10] = uVar12;
  puVar1[0xb] = uVar14;
  puVar1[0xc] = uVar5;
  puVar1[0xd] = uVar9;
  puVar1[0xe] = uVar13;
  puVar1[0xf] = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = uVar18;
  return;
}

