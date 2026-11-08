// FUN_017147ac @ 017147ac size=176 calls_out=2 calls_in=26
// strings: 

ulonglong FUN_017147ac(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_1) {
    iVar1 = FUN_0171464c(param_1,param_2[1]);
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = param_2[1];
    iVar1 = uVar3 * 4;
    if (iVar1 != 0) {
      uVar3 = *param_1;
      uVar2 = *param_2;
      if (uVar3 < uVar2) {
        if (uVar2 < uVar3 + iVar1) goto LAB_01714858;
      }
      else if ((uVar2 < uVar3) && (uVar3 < uVar2 + iVar1)) {
LAB_01714858:
        software_udf(0,0x1714858);
        return CONCAT44(uVar2,uVar3);
      }
      FUN_016dd1aa();
      uVar3 = param_2[1];
    }
    param_1[3] = param_2[3];
    param_1[1] = uVar3;
  }
  return ZEXT48(param_1);
}

