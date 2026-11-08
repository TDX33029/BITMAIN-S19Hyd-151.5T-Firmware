// FUN_0174676c @ 0174676c size=144 calls_out=1 calls_in=2
// strings: 

longlong FUN_0174676c(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_017460a4(param_1,0);
  uVar2 = 0;
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = param_1 + 0x40;
  if (0xf < param_3) {
    param_3 = 0x10;
  }
  if (param_2 < uVar1) {
    uVar2 = param_2 + param_3;
    if (uVar1 < uVar2) goto LAB_017467f8;
  }
  else if ((uVar1 < param_2) && (uVar2 = uVar1 + param_3, param_2 < uVar2)) {
LAB_017467f8:
    software_udf(0,0x17467f8);
    return (ulonglong)uVar1 << 0x20;
  }
  lVar3 = FUN_016dd1aa(param_2,uVar1,param_3,uVar2);
  return lVar3;
}

