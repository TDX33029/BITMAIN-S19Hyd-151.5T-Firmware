// FUN_0195c644 @ 0195c644 size=396 calls_out=7 calls_in=4
// strings: 

void FUN_0195c644(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *local_48;
  code *local_44;
  undefined4 uStack_40;
  char local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  code *local_28;
  
  iVar4 = param_5[1];
  if (*param_5 == -0x80000000) {
    iVar5 = param_5[2];
    piVar1 = (int *)thunk_FUN_01be5118(8);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *piVar1 = iVar4;
    piVar1[1] = iVar5;
    FUN_01a363fc(&local_2c,&DAT_01d26520,param_3,param_4,piVar1,&DAT_01d26520);
    if ((char)local_2c == '\x01') {
      local_38 = local_2c._1_1_;
      local_48 = &local_38;
      local_44 = FUN_0195b534;
      uVar3 = FUN_00a57a98(&DAT_00581695,&local_48);
      *param_1 = 0x80000001;
      param_1[1] = uVar3;
    }
    else {
      param_1[3] = local_28;
      *param_1 = 0x80000000;
    }
  }
  else {
    FUN_006666fc(&local_48,iVar4,param_5[2]);
    uVar3 = FUN_0195c5ec(param_5);
    puVar2 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    *puVar2 = uVar3;
    FUN_01a363fc(&local_38,&DAT_01d26498,param_3,param_4,puVar2,&DAT_01d26498);
    if (local_38 == '\x01') {
      local_2d = local_37;
      local_2c = &local_2d;
      local_28 = FUN_0195b534;
      uVar3 = FUN_00a57a98(&DAT_005a4789,&local_2c);
      *param_1 = 0x80000001;
      param_1[1] = uVar3;
      FUN_019bb7e0(local_48,local_44);
    }
    else {
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = uStack_40;
      param_1[3] = local_34;
    }
  }
  return;
}

