// FUN_016ed210 @ 016ed210 size=440 calls_out=10 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ec_asn1.c

void FUN_016ed210(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_84 [24];
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [24];
  uint local_24;
  
  uVar3 = *(undefined4 *)(param_2 + 8);
  local_24 = DAT_018ddaf8;
  uVar1 = FUN_0172ca8c(uVar3,param_2,&PTR_018bc3f4,0);
  uVar3 = FUN_0172cabc(uVar3);
  iVar2 = FUN_016e1884(param_1,auStack_84,0x20000010);
  if ((iVar2 != 0) && (iVar2 = FUN_016e1884(auStack_84,auStack_6c,0x20000010), iVar2 != 0)) {
    iVar2 = FUN_016e1884(auStack_6c,auStack_54,6);
    if (((iVar2 != 0) &&
        (((iVar2 = FUN_016e1700(auStack_54,&DAT_018b5f70,7), iVar2 != 0 &&
          (iVar2 = FUN_016e8a34(auStack_6c,uVar1), iVar2 != 0)) &&
         (iVar2 = FUN_016e1884(auStack_84,auStack_3c,3), iVar2 != 0)))) &&
       (iVar2 = FUN_016e17e0(auStack_3c,0), iVar2 != 0)) {
      iVar2 = FUN_016e956c(auStack_3c,uVar1,uVar3,4,0);
      if ((iVar2 != 0) &&
         (uVar4 = FUN_016e1048(param_1), uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20),
         (int)uVar4 != 0)) {
        uVar3 = 1;
        goto LAB_016ed2cc;
      }
    }
  }
  FUN_016e9cd0(6,0,0x69,"/aws-lc/crypto/evp_extra/p_ec_asn1.c",0x24);
  uVar3 = 0;
  uVar1 = extraout_r1;
LAB_016ed2cc:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,uVar1,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

