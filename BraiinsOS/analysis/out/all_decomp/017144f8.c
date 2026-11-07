// FUN_017144f8 @ 017144f8 size=300 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/bn.c | /aws-lc/crypto/fipsmodule/bn/bn.c

undefined8 FUN_017144f8(uint param_1,uint param_2,uint *param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3[3] == 0) {
    uVar3 = param_3[1];
    if ((param_3[1] <= param_2) || (iVar2 = FUN_01714430(param_3), uVar3 = param_2, iVar2 != 0)) {
      if ((param_2 & 0x3fffffff) != 0) {
        FUN_016dd606(param_1,0);
      }
      iVar2 = uVar3 * 4;
      if (iVar2 != 0) {
        uVar3 = *param_3;
        if (param_1 < uVar3) {
          if (uVar3 < param_1 + iVar2) {
LAB_017145e0:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0,0x17145e0);
            (*pcVar1)();
          }
        }
        else if ((uVar3 < param_1) && (param_1 < uVar3 + iVar2)) goto LAB_017145e0;
        FUN_016dd1aa(param_1);
      }
      return 1;
    }
    FUN_016e9cd0(3,0,0x66,"/aws-lc/crypto/fipsmodule/bn/bn.c",0x118);
  }
  else {
    FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/bn.c",0x111);
  }
  return 0;
}

