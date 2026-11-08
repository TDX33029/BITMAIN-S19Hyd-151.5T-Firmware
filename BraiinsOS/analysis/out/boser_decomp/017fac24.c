// FUN_017fac24 @ 017fac24 size=452 calls_out=8 calls_in=1
// strings: 

void FUN_017fac24(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 uint param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_78;
  uint local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char local_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined2 local_3f;
  undefined1 local_3d;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_5 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_017ab074(param_2,param_5);
    uVar3 = *param_3;
    FUN_017aaec0(&local_58,param_2,uVar3);
    uVar2 = local_54;
    if ((char)local_58 == '\a') {
LAB_017fac78:
      uVar1 = 5;
      goto LAB_017fad1c;
    }
    local_78 = local_58;
    local_74 = local_54;
    uStack_70 = local_50;
    uStack_6c = uStack_4c;
    uStack_68 = uStack_48;
    uStack_64 = uStack_44;
    if ((local_58 & 0xff) == 5) {
      if (param_5 < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_54,param_5,&DAT_01d1d474);
      }
      FUN_017fab04(local_60,param_2,param_4,local_54,0);
      if (local_60[0] != '\x04') {
        FUN_0069d8a4(local_60[0],local_5c);
      }
      if (1 < (local_78 & 0xff) - 5) {
        FUN_017fae18(&local_78);
      }
      if (local_60[0] != '\x04') goto LAB_017fad30;
    }
    else {
      if ((local_58 & 0xff) != 6) {
        FUN_017fae18(&local_78);
LAB_017fad30:
        FUN_017aac74(&local_58,param_2,uVar3);
        if ((local_58 & 0xff) != 6) {
          if ((local_58 & 0xff) == 5) {
            if ((local_54 < 9) && ((1 << (local_54 & 0xff) & 0x121U) != 0)) {
              *param_1 = 0xb01;
              param_1[1] = 0;
              return;
            }
            local_40 = 2;
          }
          else {
            local_40 = (char)local_58;
            local_3f = local_58._1_2_;
            local_3d = local_58._3_1_;
            local_38 = local_50;
            uStack_34 = uStack_4c;
            uStack_30 = uStack_48;
            uStack_2c = uStack_44;
          }
          FUN_0143a6a0(param_1,&local_40);
          return;
        }
        goto LAB_017fac78;
      }
      uVar2 = 0;
    }
    param_1[1] = uVar2;
  }
  uVar1 = 4;
LAB_017fad1c:
  *(undefined1 *)param_1 = uVar1;
  return;
}

