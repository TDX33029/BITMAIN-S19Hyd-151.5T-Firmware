// FUN_01bbf618 @ 01bbf618 size=472 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_01bbf618(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  int local_2c;
  
  uVar2 = *(uint *)(param_4 + 0x10);
  uVar7 = *(uint *)(param_4 + 0xc);
  local_2c = DAT_01d53560;
  iVar4 = *(int *)(param_4 + 4);
  iVar9 = *(int *)(param_4 + 8);
  iVar5 = *(int *)(param_1 + 4);
  local_40 = 0xffffffff;
  uStack_3c = 0;
  uVar3 = uVar7;
  if (0x3f < uVar7) {
    uVar3 = 0x40;
  }
  iVar1 = 1 << (uVar2 & 0xff);
  local_38 = iVar1 - 1;
  local_34 = (1 << (uVar2 - 0x20 & 0xff) | 1U >> (0x20 - uVar2 & 0xff)) - (uint)(iVar1 == 0);
  if (uVar2 - 1 < uVar3) {
    uVar3 = uVar3 - uVar2;
    local_34 = local_34 << (uVar3 & 0xff) | local_38 << (uVar3 - 0x20 & 0xff) |
               local_38 >> (0x20 - uVar3 & 0xff);
    local_38 = local_38 << (uVar3 & 0xff);
  }
  for (uVar3 = param_2; uVar3 < param_3; uVar3 = uVar3 + iVar1) {
    local_4c = 0;
    piVar8 = (int *)(param_1 + 0x20);
    iVar1 = FUN_01bbeb70(&local_40,uVar3,param_3 - uVar3,param_1 + 0x24,&local_4c);
    for (uVar2 = 0; uVar2 < local_4c; uVar2 = uVar2 + 1) {
      piVar8 = piVar8 + 1;
      if (param_2 + uVar7 <= uVar3 + *piVar8) {
        iVar6 = uVar3 + (*piVar8 - uVar7);
        uVar10 = FUN_01bbede4(iVar6,uVar7);
        local_44 = (undefined4)((ulonglong)uVar10 >> 0x20);
        local_48 = iVar6 - iVar5;
        FUN_01bbf48c(param_1,~(-1 << (iVar4 - iVar9 & 0xffU)) & (uint)uVar10,local_48,local_44,
                     *(undefined4 *)(param_4 + 8));
      }
    }
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

