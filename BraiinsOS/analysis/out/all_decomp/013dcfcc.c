// FUN_013dcfcc @ 013dcfcc size=320 calls_out=4 calls_in=1
// strings: 

void FUN_013dcfcc(uint *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  
  uVar4 = FUN_013d2518(param_2);
  iVar12 = *param_2;
  uVar14 = *(uint *)(iVar12 + 0x50);
  uVar5 = FUN_013d2518(param_2);
  uVar9 = 1;
  if (0x7f < uVar5) {
    uVar9 = 2;
  }
  if ((0x7ff < uVar5) && (uVar9 = 4, uVar5 < 0x10000)) {
    uVar9 = 3;
  }
  if (CARRY4(uVar9,uVar14)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01894f38);
  }
  iVar15 = *(int *)(iVar12 + 0x58);
  if (iVar15 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01894f28);
  }
  uVar13 = *(uint *)(iVar12 + 0x54);
  iVar6 = FUN_013d2518(param_2);
  uVar5 = *(uint *)(iVar12 + 0x50);
  uVar10 = *(uint *)(iVar12 + 0x54);
  uVar11 = *(uint *)(iVar12 + 0x58);
  FUN_013d2d20(param_2);
  uVar8 = 0;
  uVar3 = 0;
  uVar1 = 0;
  uVar2 = 0;
  switch(uVar4) {
  default:
    local_28 = FUN_00faaf34;
    local_2c = &local_30;
    local_30 = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057ffdf,&local_2c,&DAT_01894ce8);
  case 0x53:
    uVar1 = 1;
  case 0x73:
    uVar8 = uVar1;
    uVar3 = 1;
    break;
  case 0x57:
    uVar2 = 2;
  case 0x44:
    uVar3 = uVar2;
    uVar8 = 1;
    break;
  case 100:
    break;
  case 0x77:
    uVar3 = 2;
  }
  if (iVar6 == 10) {
    uVar13 = uVar13 + 1;
  }
  *(undefined1 *)(param_1 + 6) = uVar3;
  uVar7 = iVar15 + 1;
  if (iVar6 == 10) {
    uVar7 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x19) = uVar8;
  *param_1 = uVar5;
  param_1[1] = uVar10;
  param_1[2] = uVar11;
  param_1[3] = uVar9 + uVar14;
  param_1[4] = uVar13;
  param_1[5] = uVar7;
  return;
}

