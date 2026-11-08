// FUN_010be590 @ 010be590 size=224 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_010be590(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 uStack_21;
  
  cVar3 = '\x05';
  if (3 < *param_1) {
    cVar3 = *param_1 - 4;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar3) {
  case '\0':
                    /* WARNING: Could not recover jumptable at 0x010be5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"MethodVersionH2UriTooLong",6);
    return uVar2;
  case '\x01':
                    /* WARNING: Could not recover jumptable at 0x010be660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"Version",7);
    return uVar2;
  case '\x02':
                    /* WARNING: Could not recover jumptable at 0x010be618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"VersionH2UriTooLong",9);
    return uVar2;
  case '\x03':
                    /* WARNING: Could not recover jumptable at 0x010be630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"Uri",3);
    return uVar2;
  case '\x04':
                    /* WARNING: Could not recover jumptable at 0x010be600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"UriTooLong",10);
    return uVar2;
  case '\x06':
                    /* WARNING: Could not recover jumptable at 0x010be6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_0056a360,8);
    return uVar2;
  case '\a':
                    /* WARNING: Could not recover jumptable at 0x010be648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"StatusDecodeUpgrade",6);
    return uVar2;
  case '\b':
                    /* WARNING: Could not recover jumptable at 0x010be6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056a2f8,8);
    return uVar2;
  }
  uVar2 = *param_2;
  iVar5 = param_2[1];
  pcVar4 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar4)(uVar2,&DAT_0041114c,6);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar4)(uVar2,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar4)(uVar2,*(undefined4 *)(&DAT_018b1f08 + (uint)*param_1 * 4),
                      *(undefined4 *)(&DAT_00564ef0 + (uint)*param_1 * 4));
  }
  else {
    iVar1 = (*pcVar4)(uVar2,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    puStack_28 = &uStack_21;
    uStack_21 = 1;
    uStack_30 = uVar2;
    iStack_2c = iVar5;
    iVar1 = FUN_00fb1f64(&uStack_30,*(undefined4 *)(&DAT_018b1f18 + (uint)*param_1 * 4),
                         *(undefined4 *)(&DAT_00564ef0 + (uint)*param_1 * 4));
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&uStack_30,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar2 = (*pcVar4)(uVar2,&DAT_00418e07,1);
    return uVar2;
  }
  return 1;
}

