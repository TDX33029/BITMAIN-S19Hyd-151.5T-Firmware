// FUN_011ae884 @ 011ae884 size=340 calls_out=6 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_011ae884(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uStack_64;
  uint uStack_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 != '\x05') {
    return (uint *)&DAT_00000001;
  }
  local_50 = *(uint *)(param_2 + 4);
  local_4c = *(uint *)(param_2 + 8);
  local_44 = 0;
  local_5c = 0;
  uStack_64 = 0;
  uStack_60 = 4;
  local_54 = 0;
  iVar2 = *param_1;
  local_38 = *(undefined4 *)(param_2 + 0xc);
  if (local_50 == 0) {
    local_38 = 0;
  }
  local_58 = (uint)(local_50 != 0);
  local_48 = local_58;
  iStack_40 = local_50;
  uStack_3c = local_4c;
  while( true ) {
    uVar7 = FUN_00f45584(&local_58);
    iVar3 = (int)uVar7;
    if (iVar3 == 0) break;
    uVar6 = *(undefined4 *)(iVar3 + 8);
    uVar5 = *(undefined4 *)(iVar3 + 4);
    cVar1 = FUN_011af09c(iVar2 + 8,uVar5,uVar6);
    if (cVar1 != '\0') {
      local_34 = 0x80000000;
      local_30 = uVar5;
      uStack_2c = uVar6;
      uStack_28 = param_3;
      uVar7 = FUN_011cf8a8(param_1 + 1,(int)((ulonglong)uVar7 >> 0x20),&local_34,param_4,param_5);
      FUN_011590bc(&uStack_64,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    }
  }
  local_50 = uStack_64;
  local_4c = uStack_60 + local_5c * 4;
  local_58 = uStack_60;
  local_54 = uStack_60;
  puVar4 = (uint *)thunk_FUN_016d4a50(0x10);
  if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar4 = local_58;
  puVar4[1] = local_54;
  puVar4[2] = local_50;
  puVar4[3] = local_4c;
  return puVar4;
}

