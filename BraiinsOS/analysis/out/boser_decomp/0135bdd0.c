// FUN_0135bdd0 @ 0135bdd0 size=324 calls_out=6 calls_in=3
// strings: 

void FUN_0135bdd0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  int local_5c [3];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  uint local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  
  puVar5 = (uint *)(param_1 + 0x50);
  uVar3 = *puVar5;
  if (uVar3 != 0) {
    FUN_019ac130(&local_40,1);
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar8 = *(uint *)(param_1 + 0x14);
    uVar6 = *(uint *)(param_1 + 0x18);
    local_70 = local_40;
    uStack_6c = uStack_3c;
    uStack_68 = local_38;
    while ((uVar3 & 1) != 0) {
      iVar1 = FUN_01367c40(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
                           *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (*(undefined1 **)(iVar1 + 0x18) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_0056c2a8,0x20,&DAT_01ce85ec);
      }
      local_4c = *(undefined4 *)(iVar1 + 0x14);
      local_50 = *(undefined4 *)(iVar1 + 0x10);
      local_48 = *(undefined1 **)(iVar1 + 0x18);
      FUN_019ac248(&local_40,&local_70,&local_50);
      uVar2 = local_38;
      uVar3 = uStack_34;
      if ((local_40 & 1) != 0) {
        uVar3 = 0;
        uVar2 = 0;
      }
      uVar4 = (uint)(uVar8 <= uVar3 && (uint)(uVar2 <= uVar7) <= uVar8 - uVar3);
      if (uVar2 == uVar7 && uVar3 == uVar8) {
        uVar4 = (uint)(uVar6 < local_30) & ~local_40;
      }
      if (uVar4 != 1) {
        return;
      }
      FUN_01367f24(local_5c,puVar5,param_2);
      if (local_5c[0] == 0) {
        return;
      }
      FUN_01387ff4(param_3,local_5c,1);
      uVar3 = *puVar5;
    }
  }
  return;
}

