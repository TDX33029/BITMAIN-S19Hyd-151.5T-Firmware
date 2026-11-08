// FUN_01b096bc @ 01b096bc size=196 calls_out=1 calls_in=0
// strings: 

longlong FUN_01b096bc(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  puVar2 = *(uint **)(param_1 + 8);
  if (param_3 == (uint *)0x0 || puVar2 == (uint *)0x0) {
    return 0;
  }
  uVar1 = puVar2[1];
  if (param_2 == 0) {
    *param_3 = uVar1;
    return 1;
  }
  if (*param_3 < uVar1) {
    return (ulonglong)param_2 << 0x20;
  }
  *param_3 = uVar1;
  if (uVar1 == 0) {
    return 1;
  }
  uVar3 = *puVar2;
  if (param_2 < uVar3) {
    bVar4 = param_2 + uVar1 <= uVar3;
  }
  else {
    if (param_2 <= uVar3) goto LAB_01b09754;
    bVar4 = uVar3 + uVar1 <= param_2;
  }
  if (!bVar4) {
    software_udf(0,0x1b09740);
    return (ulonglong)param_2 << 0x20;
  }
LAB_01b09754:
  FUN_01bed4e2(param_2,uVar3,uVar1);
  return 1;
}

