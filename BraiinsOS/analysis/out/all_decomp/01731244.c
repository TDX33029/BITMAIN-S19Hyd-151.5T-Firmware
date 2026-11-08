// FUN_01731244 @ 01731244 size=460 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01731244(undefined4 param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  uVar2 = FUN_017309d0();
  FUN_0172e138(uVar2,&local_7c,&local_5c,&local_3c,param_3);
  if (((&local_7c <= param_2) || (param_2 + 8 <= &local_7c)) &&
     (&local_5c <= param_2 || param_2 <= &local_7c)) {
    piVar3 = param_2 + 0x11;
    *param_2 = local_7c;
    param_2[1] = iStack_78;
    param_2[2] = iStack_74;
    param_2[3] = iStack_70;
    param_2[4] = local_6c;
    param_2[5] = iStack_68;
    param_2[6] = iStack_64;
    param_2[7] = iStack_60;
    if (((&local_5c <= piVar3) || (param_2 + 0x19 <= &local_5c)) &&
       (&local_3c <= piVar3 || piVar3 <= &local_5c)) {
      piVar3 = param_2 + 0x22;
      param_2[0x11] = local_5c;
      param_2[0x12] = iStack_58;
      param_2[0x13] = iStack_54;
      param_2[0x14] = iStack_50;
      param_2[0x15] = local_4c;
      param_2[0x16] = iStack_48;
      param_2[0x17] = iStack_44;
      param_2[0x18] = iStack_40;
      if (((&local_3c <= piVar3) || (param_2 + 0x2a <= &local_3c)) &&
         (&local_1c <= piVar3 || piVar3 <= &local_3c)) {
        param_2[0x22] = local_3c;
        param_2[0x23] = iStack_38;
        param_2[0x24] = iStack_34;
        param_2[0x25] = iStack_30;
        param_2[0x28] = iStack_24;
        param_2[0x29] = iStack_20;
        param_2[0x26] = local_2c;
        param_2[0x27] = iStack_28;
        if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2b78();
        }
        return 0;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x173140c);
  (*pcVar1)();
}

