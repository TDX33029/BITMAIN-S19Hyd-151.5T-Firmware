// FUN_01583bb4 @ 01583bb4 size=400 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01583bb4(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar4 = (uint)*param_1;
  uVar1 = 2;
  if (0x29 < uVar4) {
    uVar1 = uVar4 - 0x2a;
  }
  if ((uVar1 & 0xff) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01583c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00569fb0,8);
    return uVar2;
  }
  if ((uVar1 & 0xff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x01583bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00411f35,0xc);
    return uVar2;
  }
  uVar2 = *param_2;
  iVar6 = param_2[1];
  pcVar5 = *(code **)(iVar6 + 0xc);
  iVar3 = (*pcVar5)(uVar2,"Io",2);
  if (iVar3 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar3 = (*pcVar5)(uVar2,"(",1);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (*pcVar5)(uVar2,(&PTR_DAT_018b4d68)[uVar4],*(undefined4 *)(&DAT_00423a04 + uVar4 * 4));
  }
  else {
    iVar3 = (*pcVar5)(uVar2,"(\n",2);
    if (iVar3 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar2;
    iStack_2c = iVar6;
    iVar3 = FUN_00fb1f64(&local_30,(&PTR_DAT_018b4e10)[uVar4],
                         *(undefined4 *)(&DAT_00423aac + uVar4 * 4));
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar3 == 0) {
    uVar2 = (*pcVar5)(uVar2,&DAT_00418e07,1);
    return uVar2;
  }
  return 1;
}

