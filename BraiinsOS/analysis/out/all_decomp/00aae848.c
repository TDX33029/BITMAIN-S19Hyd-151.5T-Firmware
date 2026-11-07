// FUN_00aae848 @ 00aae848 size=464 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00aae848(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  code *pcVar6;
  int iVar7;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  pbVar5 = (byte *)*param_1;
  cVar3 = '\x01';
  if (8 < *pbVar5) {
    cVar3 = *pbVar5 - 9;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar3) {
  case '\0':
                    /* WARNING: Could not recover jumptable at 0x00aae8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0040f9ee,0xb);
    return uVar1;
  case '\x01':
    uVar1 = *param_2;
    iVar7 = param_2[1];
    pcVar6 = *(code **)(iVar7 + 0xc);
    iVar4 = (*pcVar6)(uVar1,&DAT_004143b7,5);
    if (iVar4 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar4 = (*pcVar6)(uVar1,"(",1);
        if ((iVar4 == 0) && (iVar4 = FUN_00aaea54(pbVar5,param_2), iVar4 == 0)) {
          uVar1 = *param_2;
          pcVar6 = *(code **)(param_2[1] + 0xc);
LAB_00aaea08:
          uVar1 = (*pcVar6)(uVar1,&DAT_00418e07,1);
          return uVar1;
        }
      }
      else {
        iVar4 = (*pcVar6)(uVar1,"(\n",2);
        if (iVar4 == 0) {
          local_38 = &local_31;
          local_2c = &DAT_01880dc4;
          local_28 = param_2[2];
          local_24 = param_2[3];
          local_31 = 1;
          local_40 = uVar1;
          local_3c = iVar7;
          local_30 = (undefined1 *)&local_40;
          iVar4 = FUN_00aaea54(pbVar5,&local_30);
          if ((iVar4 == 0) &&
             (iVar4 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2), iVar4 == 0))
          goto LAB_00aaea08;
        }
      }
    }
    return 1;
  case '\x02':
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_0036df98;
    break;
  case '\x03':
                    /* WARNING: Could not recover jumptable at 0x00aae8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_0036dfa4,0xe);
    return uVar1;
  case '\x04':
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_0036dfb2;
  }
                    /* WARNING: Could not recover jumptable at 0x00aae8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(iVar4 + 0xc))(uVar1,puVar2,0xc);
  return uVar1;
}

