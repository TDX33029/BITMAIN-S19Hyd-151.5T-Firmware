// FUN_01afddc0 @ 01afddc0 size=228 calls_out=4 calls_in=24
// strings: cbs_get_asn1 | /aws-lc/crypto/bytestring/cbs.c

void FUN_01afddc0(undefined4 param_1,undefined1 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_24;
  int local_20;
  undefined1 auStack_1c [8];
  uint local_14;
  
  if (param_2 == (undefined1 *)0x0) {
    param_2 = auStack_1c;
  }
  local_14 = DAT_01d53560;
  uVar3 = FUN_01afdd74(param_1,param_2,&local_20,&local_24);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar1 = 0;
  if ((int)uVar3 != 0) {
    if (param_3 == local_20) {
      uVar3 = FUN_01afd638(param_2,local_24);
      uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01be3310(&DAT_0059bb23,"/aws-lc/crypto/bytestring/cbs.c",0x1c7,"cbs_get_asn1");
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,local_14 ^ DAT_01d53560,0);
  }
  return;
}

