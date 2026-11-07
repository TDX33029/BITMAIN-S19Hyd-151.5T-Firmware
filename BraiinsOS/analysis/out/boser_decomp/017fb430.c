// FUN_017fb430 @ 017fb430 size=244 calls_out=4 calls_in=0
// strings: 

void FUN_017fb430(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  char local_40;
  undefined2 local_3f;
  undefined1 local_3d;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char local_28;
  undefined2 local_27;
  undefined1 local_25;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_017fab04(&local_40,param_2,1,0,1);
  if (local_40 != '\x04') {
    FUN_0069d8a4(local_40,local_3c);
    FUN_017aac74(&local_40,param_2,*param_3);
    if (local_40 == '\x06') {
      uVar1 = 5;
      goto LAB_017fb49c;
    }
    if (local_40 != '\x05') {
      local_28 = local_40;
      local_27 = local_3f;
      local_25 = local_3d;
      local_20 = local_38;
      uStack_1c = uStack_34;
      uStack_18 = uStack_30;
      uStack_14 = uStack_2c;
LAB_017fb504:
      FUN_0143a6a0(param_1,&local_28);
      return;
    }
    if (local_3c != 0) {
      if (local_3c == 5 || local_3c == 8) {
        *param_1 = 0xb01;
        param_1[1] = 0;
        return;
      }
      local_28 = '\x02';
      goto LAB_017fb504;
    }
  }
  uVar1 = 4;
LAB_017fb49c:
  *(undefined1 *)param_1 = uVar1;
  return;
}

