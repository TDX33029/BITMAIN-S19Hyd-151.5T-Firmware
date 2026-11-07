// FUN_0117bd98 @ 0117bd98 size=304 calls_out=5 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_0117bd98(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
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
  uStack_64 = 0;
  uStack_60 = 4;
  local_38 = *(undefined4 *)(param_2 + 0xc);
  local_44 = 0;
  if (local_50 == 0) {
    local_38 = 0;
  }
  local_54 = 0;
  local_58 = (uint)(local_50 != 0);
  local_5c = 0;
  local_48 = local_58;
  iStack_40 = local_50;
  uStack_3c = local_4c;
  while( true ) {
    uVar3 = FUN_00f45584(&local_58);
    iVar1 = (int)uVar3;
    if (iVar1 == 0) break;
    uStack_2c = *(undefined4 *)(iVar1 + 8);
    local_30 = *(undefined4 *)(iVar1 + 4);
    local_34 = 0x80000000;
    uStack_28 = param_3;
    uVar3 = FUN_011cf8a8(param_1,(int)((ulonglong)uVar3 >> 0x20),&local_34,param_4,param_5);
    FUN_011590bc(&uStack_64,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  local_50 = uStack_64;
  local_4c = uStack_60 + local_5c * 4;
  local_58 = uStack_60;
  local_54 = uStack_60;
  puVar2 = (uint *)thunk_FUN_016d4a50(0x10);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar2 = local_58;
  puVar2[1] = local_54;
  puVar2[2] = local_50;
  puVar2[3] = local_4c;
  return puVar2;
}

