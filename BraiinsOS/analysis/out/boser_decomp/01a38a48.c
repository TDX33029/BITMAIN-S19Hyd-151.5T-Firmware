// FUN_01a38a48 @ 01a38a48 size=344 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01a38a48(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_54;
  int iStack_50;
  undefined1 *local_4c;
  undefined1 local_45;
  int local_44 [9];
  
  local_44[0] = *param_1;
  if (*(char *)(local_44[0] + 1) == '\x02') {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,&DAT_0052e42c,2);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_01ae1bfc(local_44,local_44[0] + 2);
      iVar1 = (*pcVar2)(uVar3,local_44,0x24);
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_4c = &local_45;
      local_45 = 1;
      uStack_54 = uVar3;
      iStack_50 = iVar4;
      FUN_01ae1bfc(local_44,local_44[0] + 2);
      iVar1 = FUN_01302620(&uStack_54,local_44,0x24);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_01302620(&uStack_54,&DAT_005312e2,2);
    }
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = (*pcVar2)(uVar3,&DAT_0053341b,1);
  }
  else {
    uVar3 = FUN_013032f4(param_2,&DAT_0052c2af,3,local_44,FUN_01a2f5d0);
  }
  return uVar3;
}

