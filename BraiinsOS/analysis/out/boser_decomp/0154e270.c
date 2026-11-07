// FUN_0154e270 @ 0154e270 size=316 calls_out=6 calls_in=0
// strings: 

bool FUN_0154e270(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  int local_78;
  int local_74;
  int local_6c;
  uint local_44 [3];
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  bVar3 = true;
  if (*param_2 == '\x05') {
    iVar2 = *(int *)(param_2 + 0xc);
    FUN_0153c238(&local_78,iVar2);
    bVar3 = true;
    FUN_0154ef30(param_1 + 8,param_2,&local_78,param_3,1);
    if (local_6c != iVar2) {
      local_44[2] = *(uint *)(param_2 + 4);
      local_38 = *(undefined4 *)(param_2 + 8);
      iVar4 = *(int *)(param_1 + 0x4c);
      local_24 = iVar2;
      if (local_44[2] == 0) {
        local_24 = 0;
      }
      local_44[0] = (uint)(local_44[2] != 0);
      local_30 = 0;
      local_44[1] = 0;
      local_34 = local_44[0];
      local_2c = local_44[2];
      local_28 = local_38;
      while( true ) {
        uVar5 = FUN_01a41998(local_44);
        iVar2 = (int)uVar5;
        if (iVar2 == 0) break;
        iVar1 = FUN_01540d6c(&local_78,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
        if ((iVar1 == 0) &&
           ((iVar4 == 0 ||
            (iVar1 = FUN_01577618((int *)(param_1 + 0x4c),(int)((ulonglong)uVar5 >> 0x20),param_3),
            iVar1 == 0)))) break;
      }
      bVar3 = iVar2 == 0;
    }
    if ((local_74 != 0) && (iVar2 = local_74 * 4 + 4, local_74 + iVar2 != -5)) {
      thunk_FUN_01be4678(local_78 - iVar2);
    }
  }
  return bVar3;
}

