// FUN_0070a550 @ 0070a550 size=300 calls_out=5 calls_in=2
// strings: 

void FUN_0070a550(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined **local_78;
  char *pcStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char local_50;
  undefined **local_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  local_60 = 0;
  uStack_5c = 0x18;
  uStack_58 = 0;
  uStack_54 = 0;
  iVar1 = FUN_0137f4c4(param_2);
  if ((iVar1 == 0) && ((*param_1 & 1) != 0)) {
    if (param_1[4] == param_1[2] && param_1[5] == param_1[3]) {
      if (param_1[4] == 0 && param_1[5] == 0) {
        local_78 = &PTR_FUN_01c06dcc;
        pcStack_74 = "0";
        uStack_70 = 1;
        uStack_6c = 0;
        uStack_68 = 0;
      }
      else {
        uVar2 = FUN_01415f98(&local_60);
        FUN_01ac61a4(&local_38,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
        if ((char)local_28 == '\x02') {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&uStack_21,&DAT_01d210e8,&DAT_01c06df4);
        }
        local_78 = local_38;
        pcStack_74 = pcStack_34;
        uStack_70 = uStack_30;
        uStack_6c = uStack_2c;
        uStack_68 = local_28;
      }
      local_38 = (undefined **)0x0;
      pcStack_34 = (char *)0x18;
      uStack_30 = 0;
      uStack_2c = 0;
      FUN_00714c58(&local_60,param_2,&local_38,&local_78);
      if (local_50 != '\x02') {
        (**(code **)(local_60 + 0x10))(&uStack_54,uStack_5c,uStack_58);
      }
    }
  }
  return;
}

