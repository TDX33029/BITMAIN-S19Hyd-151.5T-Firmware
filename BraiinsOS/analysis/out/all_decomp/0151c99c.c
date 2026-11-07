// FUN_0151c99c @ 0151c99c size=364 calls_out=1 calls_in=1
// strings: OtherErrorcertificate had invalid extensionssignature failed verificationmessage was not 32 bytes (do you need to hash?)malformed public keymalformed signaturemalformed or out-of-range secret keymalformed or out-of-range shared secretbad recovery idbad tweaknot enough memory allocatedthe sum of public keys was invalid or the input vector lengths was less than 1couldn't create paritymalformed EllSwift valueLayoutError

undefined4 FUN_0151c99c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,
                    "OtherErrorcertificate had invalid extensionssignature failed verificationmessage was not 32 bytes (do you need to hash?)malformed public keymalformed signaturemalformed or out-of-range secret keymalformed or out-of-range shared secretbad recovery idbad tweaknot enough memory allocatedthe sum of public keys was invalid or the input vector lengths was less than 1couldn\'t create paritymalformed EllSwift valueLayoutError"
                    ,10);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if ((iVar1 == 0) &&
         (iVar1 = (**(code **)(param_1[1] + 0xc))
                            (*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8,param_2),
         iVar1 == 0)) {
        uVar3 = *param_2;
        pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_0151cae4:
        uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
        return uVar3;
      }
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 == 0) {
        local_38 = &local_31;
        local_28 = param_2[2];
        local_24 = param_2[3];
        local_2c = &DAT_01880dc4;
        local_31 = 1;
        local_40 = uVar3;
        local_3c = iVar4;
        local_30 = (undefined1 *)&local_40;
        iVar1 = (**(code **)(param_1[1] + 0xc))
                          (*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8,&local_30);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_0151cae4;
      }
    }
  }
  return 1;
}

