// FUN_012c4210 @ 012c4210 size=716 calls_out=5 calls_in=3
// strings: 

void FUN_012c4210(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  uint unaff_r4;
  undefined4 unaff_r5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  char local_38;
  char local_37;
  byte local_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  
  iVar6 = param_2 + 0xc;
  FUN_012c6160(iVar6);
  FUN_012c39c8(&local_30,param_2);
  if ((char)local_30 == '\x01') goto LAB_012c42ac;
  bVar1 = true;
  cVar4 = local_30._2_1_;
  if (local_30._1_1_ == '\0') {
    cVar4 = '\0';
  }
  if (cVar4 == '+') {
LAB_012c4288:
    FUN_012c6160(iVar6);
  }
  else if (cVar4 == '-') {
    bVar1 = false;
    goto LAB_012c4288;
  }
  FUN_012c3af8(&local_38,param_2);
  if (local_38 == '\x01') {
    local_2c = local_34;
  }
  else {
    if (local_37 == '\x01') {
      uVar7 = local_36 - 0x30 & 0xff;
      if (uVar7 < 10) {
        while( true ) {
          FUN_012c39c8(&local_30,param_2);
          if ((char)local_30 == '\x01') break;
          uVar2 = 0xffffffd0;
          if (local_30._1_1_ != '\0') {
            uVar2 = (local_30 >> 0x10 & 0xff) - 0x30;
          }
          uVar2 = uVar2 & 0xff;
          if (9 < uVar2) {
            uVar3 = SignedSaturate(param_7 + uVar7,0x20);
            SignedDoesSaturate(uVar3,0x20);
            uVar3 = SignedSaturate(param_7 - uVar7,0x20);
            SignedDoesSaturate(uVar3,0x20);
            FUN_012c4418(param_1,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                         param_3);
            return;
          }
          FUN_012c6160(iVar6);
          if ((0xccccccb < (int)uVar7) && ((uVar7 != 0xccccccc || (7 < uVar2)))) {
            if ((!(param_5 == 0 && param_6 == 0)) && (bVar1)) {
              unaff_r5 = FUN_01966fbc(auStack_28 + 4,*(undefined4 *)(param_2 + 0x30),
                                      *(undefined4 *)(param_2 + 0x34));
              goto LAB_012c458c;
            }
            goto LAB_012c4548;
          }
          uVar7 = uVar2 + uVar7 * 10;
        }
        goto LAB_012c42ac;
      }
      uVar3 = *(undefined4 *)(param_2 + 0x30);
      uVar5 = *(undefined4 *)(param_2 + 0x34);
      local_30 = 0xd;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x30);
      uVar5 = *(undefined4 *)(param_2 + 0x34);
      local_30 = 5;
    }
    local_2c = FUN_01966fbc(&local_30,uVar3,uVar5);
  }
LAB_012c42ac:
  *param_1 = 1;
  param_1[1] = local_2c;
  return;
LAB_012c4548:
  FUN_012c39c8(auStack_28 + 4,param_2);
  if ((char)unaff_r4 != '\0') {
LAB_012c458c:
    param_1[1] = unaff_r5;
    uVar3 = 1;
LAB_012c45b0:
    *param_1 = uVar3;
    return;
  }
  if (((char)(unaff_r4 >> 8) != '\x01') || (9 < (unaff_r4 >> 0x10 & 0xff) - 0x30)) {
    uVar3 = 0;
    uVar8 = 0x8000000000000000;
    if (param_3 != 0) {
      uVar8 = 0;
    }
    *(undefined8 *)(param_1 + 2) = uVar8;
    goto LAB_012c45b0;
  }
  FUN_012c6160(param_2 + 0xc);
  goto LAB_012c4548;
}

