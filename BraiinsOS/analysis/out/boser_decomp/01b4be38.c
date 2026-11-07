// FUN_01b4be38 @ 01b4be38 size=772 calls_out=10 calls_in=1
// strings: tls1_P_hash | /aws-lc/crypto/fipsmodule/tls/kdf.c | len == chunk

undefined4
FUN_01b4be38(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_ef8;
  uint local_ef4;
  undefined1 auStack_ef0 [1216];
  undefined1 auStack_a30 [1216];
  undefined1 auStack_570 [1220];
  undefined1 auStack_ac [64];
  byte abStack_6c [64];
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar1 = FUN_01b3b6b4(param_3,&PTR_01d3b2b0,param_3,0);
  FUN_01b4a564(auStack_ef0);
  FUN_01b4a564(auStack_a30);
  FUN_01b4a564(auStack_570);
  iVar2 = FUN_01b4a64c(auStack_570,param_4,param_5,param_3,0);
  if ((((iVar2 != 0) && (iVar2 = FUN_01b4bd40(auStack_ef0,auStack_570), iVar2 != 0)) &&
      (iVar2 = FUN_01b4af50(auStack_ef0,param_6,param_7), iVar2 != 0)) &&
     ((iVar2 = FUN_01b4af50(auStack_ef0,param_8,param_9), iVar2 != 0 &&
      (iVar2 = FUN_01b4af50(auStack_ef0,param_10,param_11), iVar2 != 0)))) {
    iVar2 = FUN_01b4afcc(auStack_ef0,auStack_ac,&local_ef8);
    if (iVar2 != 0) {
      while ((((iVar2 = FUN_01b4bd40(auStack_ef0,auStack_570), iVar2 != 0 &&
               (iVar2 = FUN_01b4af50(auStack_ef0,auStack_ac,local_ef8), iVar2 != 0)) &&
              ((param_2 <= uVar1 || (iVar2 = FUN_01b4bd40(auStack_a30,auStack_ef0), iVar2 != 0))))
             && ((((iVar2 = FUN_01b4af50(auStack_ef0,param_6,param_7), iVar2 != 0 &&
                   (iVar2 = FUN_01b4af50(auStack_ef0,param_8,param_9), iVar2 != 0)) &&
                  (iVar2 = FUN_01b4af50(auStack_ef0,param_10,param_11), iVar2 != 0)) &&
                 (iVar2 = FUN_01b4afcc(auStack_ef0,abStack_6c,&local_ef4), iVar2 != 0))))) {
        if (uVar1 != local_ef4) {
                    /* WARNING: Subroutine does not return */
          FUN_01be3310("len == chunk","/aws-lc/crypto/fipsmodule/tls/kdf.c",0x38,"tls1_P_hash");
        }
        if (param_2 < uVar1) {
          uVar5 = param_2;
        }
        else {
          uVar5 = uVar1;
        }
        pbVar3 = abStack_6c;
        for (pbVar4 = param_1; pbVar4 != param_1 + uVar5; pbVar4 = pbVar4 + 1) {
          *pbVar4 = *pbVar4 ^ *pbVar3;
          pbVar3 = pbVar3 + 1;
        }
        param_2 = param_2 - uVar5;
        if (param_2 == 0) {
          uVar6 = 1;
          goto LAB_01b4bfd8;
        }
        iVar2 = FUN_01b4afcc(auStack_a30,auStack_ac,&local_ef8);
        if (iVar2 == 0) break;
        param_1 = param_1 + uVar5;
      }
    }
  }
  uVar6 = 0;
LAB_01b4bfd8:
  FUN_01b6b174(auStack_ac,0x40);
  FUN_01b4a5d4(auStack_ef0);
  FUN_01b4a5d4(auStack_a30);
  FUN_01b4a5d4(auStack_570);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar6;
}

