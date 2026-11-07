// FUN_018e6db8 @ 018e6db8 size=384 calls_out=4 calls_in=1
// strings: PskKeyExchangeMode

void FUN_018e6db8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  char unaff_r5;
  int iVar5;
  undefined8 uVar6;
  undefined8 uStack_3c;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  FUN_01930f74(&local_30,&DAT_01d23360,param_2);
  if ((char)local_30 == '\x18') {
    uVar6 = FUN_0192fac8(param_2,local_2c);
    if ((int)uVar6 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 0xb;
      return;
    }
    iVar5 = 1;
    local_34 = 0;
    local_28 = 0;
    local_2c = 1;
    local_30 = 0;
    if ((int)((ulonglong)uVar6 >> 0x20) != 0) {
      cVar4 = '\0';
      do {
        iVar1 = local_28;
        uStack_3c = uVar6;
        uVar6 = FUN_0192fac8(&uStack_3c,1);
        if (((char *)uVar6 == (char *)0x0) || ((int)((ulonglong)uVar6 >> 0x20) != 1)) {
          *(undefined1 *)(param_1 + 1) = 0xc;
          param_1[2] = "PskKeyExchangeMode";
          param_1[3] = 0x12;
          *param_1 = 1;
          *(char *)((int)param_1 + 6) = cVar4;
          *(char *)((int)param_1 + 5) = unaff_r5;
          FUN_0134aee0(local_30,iVar5,1,2);
          return;
        }
        cVar4 = *(char *)uVar6;
        unaff_r5 = cVar4;
        if (cVar4 != '\x01') {
          unaff_r5 = '\x02';
        }
        if (cVar4 == '\0') {
          unaff_r5 = cVar4;
        }
        uVar6 = uStack_3c;
        if (iVar1 == local_30) {
          FUN_016f5378(&local_30);
          iVar5 = local_2c;
          uVar6 = uStack_3c;
        }
        uStack_3c._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
        pcVar2 = (char *)(iVar5 + iVar1 * 2);
        *pcVar2 = unaff_r5;
        local_28 = iVar1 + 1;
        pcVar2[1] = cVar4;
      } while (local_34 < uStack_3c._4_4_);
    }
    param_1[1] = local_30;
    param_1[2] = local_2c;
    param_1[3] = local_28;
    uVar3 = 0;
  }
  else {
    *(char *)(param_1 + 1) = (char)local_30;
    uVar3 = 1;
    *(undefined1 *)((int)param_1 + 7) = local_30._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_30._1_2_;
    param_1[2] = local_2c;
    param_1[3] = local_28;
  }
  *param_1 = uVar3;
  return;
}

