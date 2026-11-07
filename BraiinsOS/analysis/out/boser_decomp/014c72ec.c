// FUN_014c72ec @ 014c72ec size=276 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_014c72ec(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  iVar4 = 0x8c;
  uVar7 = 1;
  if (*param_1 == 2) {
    iVar4 = 0x4c;
  }
  param_1 = (int *)((int)param_1 + iVar4);
  if (*param_1 == 1) {
    FUN_00664bdc(&local_30);
    iVar4 = param_1[1];
    if (iVar4 != 0) {
      local_34 = param_1[2];
      do {
        uVar1 = *(ushort *)(iVar4 + 0x8a);
        iVar8 = iVar4 + 4;
        uVar9 = 0xffffffff;
        iVar5 = (uint)uVar1 * 0xc;
        do {
          if (iVar5 == 0) {
            uVar9 = (uint)uVar1;
            goto LAB_014c73bc;
          }
          uVar6 = *(uint *)(iVar8 + 8);
          uVar3 = uVar6;
          if (local_28 < uVar6) {
            uVar3 = local_28;
          }
          iVar2 = FUN_01bed842(local_2c,*(undefined4 *)(iVar8 + 4),uVar3);
          if (iVar2 == 0) {
            iVar2 = local_28 - uVar6;
          }
          iVar5 = iVar5 + -0xc;
          uVar9 = uVar9 + 1;
          iVar8 = iVar8 + 0xc;
        } while ((char)((0 < iVar2) - (iVar2 < 0)) == '\x01');
        if (0 < iVar2 == iVar2 < 0) {
          uVar7 = 1;
          goto LAB_014c73e8;
        }
LAB_014c73bc:
        if (local_34 == 0) break;
        local_34 = local_34 + -1;
        iVar4 = *(int *)(iVar4 + uVar9 * 4 + 0x8c);
      } while( true );
    }
    uVar7 = 0;
LAB_014c73e8:
    FUN_019bb7e0(local_30,local_2c);
  }
  return uVar7;
}

