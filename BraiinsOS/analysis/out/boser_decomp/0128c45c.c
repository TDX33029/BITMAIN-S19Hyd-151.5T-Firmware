// FUN_0128c45c @ 0128c45c size=388 calls_out=2 calls_in=2
// strings: 

void FUN_0128c45c(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  
  FUN_012857e8(&local_30);
  uVar1 = local_30;
  if (local_28 == 0x3b9aca10) {
    FUN_0128578c(&local_30,param_2,":");
    if ((char)local_30 == '\x04') {
      bVar5 = local_30._1_1_ == '\0';
LAB_0128c4f8:
      uVar4 = 0;
      uVar3 = 0;
      if (!bVar5) {
        FUN_012857e8(&local_30,param_2);
        uVar4 = local_30;
        if (local_28 != 0x3b9aca10) {
          param_1[2] = local_30;
          goto LAB_0128c4cc;
        }
        FUN_0128578c(&local_30,param_2,":");
        if ((char)local_30 == '\x04') {
          uVar3 = 0;
          if (local_30._1_1_ != '\0') {
LAB_0128c594:
            FUN_012857e8(&local_30,param_2);
            uVar3 = local_30;
            if (local_28 != 0x3b9aca10) {
              param_1[2] = local_30;
              param_1[3] = local_2c;
              param_1[4] = local_28;
              param_1[5] = local_24;
              goto LAB_0128c4d8;
            }
          }
        }
        else {
          if ((local_30 & 0xff) != 4) goto LAB_0128c5cc;
          uVar3 = 0;
          if ((local_30 & 0x100) != 0) goto LAB_0128c594;
        }
      }
      param_1[3] = uVar3;
      uVar2 = 0;
      param_1[1] = uVar1;
      param_1[2] = uVar4;
      goto LAB_0128c50c;
    }
    if ((local_30 & 0xff) == 4) {
      bVar5 = (local_30 & 0x100) == 0;
      goto LAB_0128c4f8;
    }
LAB_0128c5cc:
    param_1[2] = local_30;
    param_1[3] = local_2c;
    param_1[4] = 0x3b9aca06;
  }
  else {
    param_1[2] = local_30;
LAB_0128c4cc:
    param_1[3] = local_2c;
    param_1[4] = local_28;
    param_1[5] = local_24;
  }
LAB_0128c4d8:
  uVar2 = 1;
LAB_0128c50c:
  *param_1 = uVar2;
  return;
}

