// FUN_00e247f0 @ 00e247f0 size=212 calls_out=4 calls_in=3
// strings: 

void FUN_00e247f0(undefined4 *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  int local_1c;
  
  if (param_2 != (char *)0x0) {
    iVar1 = FUN_014a8df0(param_2);
    if (iVar1 != 0) {
LAB_00e2481c:
      *param_1 = 2;
      return;
    }
    if ((*param_2 == '\x03') &&
       (iVar1 = FUN_014afb6c(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)),
       iVar1 != 0)) {
      local_40 = *(undefined4 *)(param_2 + 8);
      uStack_3c = *(undefined4 *)(param_2 + 0xc);
      local_20 = 1;
      local_2c = 1;
      iVar1 = -1;
      local_30 = 0x2c;
      local_44 = 0x2c;
      local_28 = 0;
      uStack_38 = 0;
      local_34 = uStack_3c;
      local_24 = uStack_3c;
      local_1c = param_3;
      do {
        iVar2 = FUN_01aa510c(&local_44);
        iVar1 = iVar1 + 1;
      } while (iVar2 != 0);
      if (iVar1 == param_3) goto LAB_00e2481c;
      local_44 = 0;
      goto LAB_00e248ac;
    }
  }
  local_44 = 4;
LAB_00e248ac:
  FUN_014a5cd0(param_1,&local_44);
  return;
}

