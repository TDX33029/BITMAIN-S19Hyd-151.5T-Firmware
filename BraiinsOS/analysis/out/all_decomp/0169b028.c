// FUN_0169b028 @ 0169b028 size=332 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0169b028(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  byte *local_28;
  code *local_24;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar3)(uVar4,&DAT_00414b90,5);
  if (iVar2 != 0) {
    return 1;
  }
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 2) != 0) {
LAB_0169b0f4:
      iVar2 = (*pcVar3)(uVar4,&DAT_00568a44,4);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_0169b110;
    }
    if ((bVar1 & 4) != 0) goto LAB_0169b134;
    local_24 = FUN_00facae0;
    local_28 = param_1;
    iVar2 = FUN_00fa948c(uVar4,iVar5,&DAT_00414b9a,&local_28);
  }
  else {
    iVar2 = (*pcVar3)(uVar4,&DAT_00414b95,5);
    if (iVar2 != 0) {
      return 1;
    }
    if ((bVar1 & 2) != 0) {
      iVar2 = (*pcVar3)(uVar4," | ",3);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_0169b0f4;
    }
LAB_0169b110:
    if ((bVar1 & 4) == 0) goto LAB_0169b150;
    iVar2 = (*pcVar3)(uVar4," | ",3);
    if (iVar2 != 0) {
      return 1;
    }
LAB_0169b134:
    iVar2 = (*pcVar3)(uVar4,&DAT_00568b4c,4);
  }
  if (iVar2 != 0) {
    return 1;
  }
LAB_0169b150:
  uVar4 = (*pcVar3)(uVar4,&DAT_00418e07,1);
  return uVar4;
}

