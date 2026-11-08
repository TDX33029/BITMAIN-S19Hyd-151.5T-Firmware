// FUN_0128cfc4 @ 0128cfc4 size=492 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_0128cfc4(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar2 = param_1 * -0x3d70a3d7 + 0x51eb850;
  if ((uVar2 >> 4 | param_1 * -0x70000000) < 0xa3d70b) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if ((param_1 & 3) == 0) {
      uVar4 = (uint)(0x28f5c28 < (uVar2 >> 2 | param_1 * 0x40000000));
    }
  }
  lVar1 = (longlong)(int)param_1 * 0x16d + -0xaf8ca;
  iVar3 = (int)param_1 >> 0x1f;
  if ((int)param_1 < 0x7b2) {
    uVar5 = iVar3 - (uint)(param_1 < 0x7b4);
    uVar2 = uVar5 >> 0x1e;
    iVar6 = uVar5 + CARRY4(param_1 - 0x7b4,uVar2);
    iVar3 = iVar3 - (uint)(param_1 < 2000);
    lVar9 = FUN_01bf0fb0(param_1 - 2000,iVar3,0xffffff9c,0xffffffff);
    lVar10 = FUN_01bf0fb0(param_1 - 2000,iVar3,400,0);
    lVar1 = lVar9 + lVar1 + CONCAT44(iVar6 >> 2,(param_1 - 0x7b4) + uVar2 >> 2 | iVar6 * 0x40000000)
            + lVar10 + (ulonglong)(2 < param_2 & uVar4);
  }
  else {
    uVar5 = iVar3 - (uint)(param_1 < 0x7b0);
    uVar2 = param_1 - 0x7b0 >> 2 | uVar5 * 0x40000000;
    uVar7 = (uint)lVar1 + uVar2;
    uVar8 = FUN_01bf0ff0(param_1 - 0x76c,iVar3 - (uint)(param_1 < 0x76c),100,0);
    lVar9 = FUN_01bf0ff0(param_1 - 0x640,iVar3 - (uint)(param_1 < 0x640),400,0);
    lVar9 = lVar9 + CONCAT44(((int)((ulonglong)lVar1 >> 0x20) + (uVar5 >> 2) +
                             (uint)CARRY4((uint)lVar1,uVar2)) -
                             ((int)((ulonglong)uVar8 >> 0x20) + (uint)(uVar7 < (uint)uVar8)),
                             uVar7 - (uint)uVar8);
    uVar2 = (uint)lVar9;
    uVar4 = param_2 < 3 & uVar4;
    lVar1 = CONCAT44((int)((ulonglong)lVar9 >> 0x20) - (uint)(uVar2 < uVar4),uVar2 - uVar4);
  }
  param_2 = param_2 - 1;
  if (0xb < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_2,0xc,&DAT_01c261c8);
  }
  lVar1 = lVar1 + CONCAT44(param_4,param_3) + *(longlong *)(&DAT_00404b88 + param_2 * 8);
  iVar3 = (int)lVar1;
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)(iVar3 == 0),iVar3 + -1);
}

