// FUN_01652ae4 @ 01652ae4 size=200 calls_out=4 calls_in=10
// strings: internal error: entered unreachable code

undefined4 * FUN_01652ae4(undefined4 *param_1)

{
  char cVar1;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_01651608(&local_88);
    cVar1 = *(char *)(param_1 + 0xd);
    local_50 = *param_1;
    uStack_4c = param_1[1];
    uStack_48 = param_1[2];
    uStack_44 = param_1[3];
    local_40 = param_1[4];
    uStack_3c = param_1[5];
    uStack_38 = param_1[6];
    uStack_34 = param_1[7];
    local_30 = param_1[8];
    uStack_2c = param_1[9];
    uStack_28 = param_1[10];
    uStack_24 = param_1[0xb];
    uStack_20 = param_1[0xc];
    *param_1 = local_88;
    param_1[1] = uStack_84;
    param_1[2] = uStack_80;
    param_1[3] = uStack_7c;
    param_1[4] = local_78;
    param_1[5] = uStack_74;
    param_1[6] = uStack_70;
    param_1[7] = uStack_6c;
    param_1[8] = local_68;
    param_1[9] = uStack_64;
    param_1[10] = uStack_60;
    param_1[0xb] = uStack_5c;
    param_1[0xc] = uStack_58;
    *(undefined1 *)(param_1 + 0xd) = 1;
    if (cVar1 == '\x01') {
      FUN_01652be4(&local_50);
    }
    else {
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2f25c);
      }
      FUN_019a2bcc(param_1,&LAB_01652bb8);
    }
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    param_1 = (undefined4 *)0x0;
  }
  return param_1;
}

