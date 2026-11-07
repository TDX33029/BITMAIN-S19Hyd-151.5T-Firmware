// FUN_010cd1e4 @ 010cd1e4 size=312 calls_out=1 calls_in=0
// strings: InvalidUriUnknownSpecificationspecificationCircularMetaschema

undefined4 FUN_010cd1e4(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,"InvalidUriUnknownSpecificationspecificationCircularMetaschema",10);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar2)(uVar3,*(undefined4 *)(&DAT_018b2024 + (uint)*param_1 * 4),
                      *(undefined4 *)(&DAT_0042014c + (uint)*param_1 * 4));
  }
  else {
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar3;
    iStack_2c = iVar4;
    iVar1 = FUN_00fb1f64(&local_30,*(undefined4 *)(&DAT_018b2050 + (uint)*param_1 * 4),
                         *(undefined4 *)(&DAT_00420178 + (uint)*param_1 * 4));
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}

