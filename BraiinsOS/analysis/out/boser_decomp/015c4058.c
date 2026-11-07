// FUN_015c4058 @ 015c4058 size=480 calls_out=6 calls_in=2
// strings: 

void FUN_015c4058(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_5c;
  undefined4 local_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  
  local_30 = 0;
  local_34 = 1;
  local_38 = 0;
  iVar4 = FUN_015a9598(param_2,&local_38);
  iVar3 = local_30;
  uVar2 = local_34;
  uVar1 = local_38;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_44,&DAT_01cfc6c8,&DAT_01d30334);
  }
  if (*(int *)(param_1 + 0x16c) != 0) {
    uVar5 = FUN_01adafd4(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174),
                         *(undefined4 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x17c),local_34,
                         local_30);
    uVar10 = uVar5 >> 0x19;
    uVar11 = *(uint *)(param_1 + 0x164);
    iVar4 = *(int *)(param_1 + 0x160);
    local_5c = 0;
    while( true ) {
      uVar5 = uVar11 & uVar5;
      uVar6 = *(uint *)(iVar4 + uVar5);
      uVar7 = uVar6 ^ uVar10 * 0x1010101;
      uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar8 = uVar5 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                       (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar11;
        uVar7 = uVar7 - 1 & uVar7;
        iVar9 = iVar4 + -0x18 + uVar8 * -0x18;
        if ((iVar3 == *(int *)(iVar9 + 8)) &&
           (iVar9 = thunk_FUN_01bed842(uVar2,*(undefined4 *)(iVar9 + 4),iVar3), iVar9 == 0)) {
          iVar4 = iVar4 + uVar8 * -0x18;
          uVar10 = *(uint *)(iVar4 + -8);
          *(uint *)(iVar4 + -8) = uVar10 + param_3;
          *(uint *)(iVar4 + -4) = *(int *)(iVar4 + -4) + param_4 + (uint)CARRY4(uVar10,param_3);
          FUN_0134bd64(uVar1,uVar2);
          return;
        }
      }
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      local_5c = local_5c + 4;
      uVar5 = uVar5 + local_5c;
    }
  }
  uStack_40 = uVar2;
  iStack_3c = iVar3;
  local_44 = uVar1;
  FUN_015dc9e4(&local_38,param_1 + 0x160,&local_44);
  return;
}

