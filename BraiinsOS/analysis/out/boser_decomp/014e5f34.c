// FUN_014e5f34 @ 014e5f34 size=272 calls_out=5 calls_in=1
// strings: cannot parse integer from empty string

void FUN_014e5f34(undefined1 param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = &local_30;
  local_2c = 1;
  local_1c = &DAT_01cfa1bc;
  local_28 = 0;
  puVar2 = &DAT_0053106d;
  local_30 = 0;
  uVar3 = 0x16;
  local_14 = 0;
  local_18 = 0x60000020;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 0:
    iVar1 = FUN_012900c0(param_2,&local_30,&DAT_01cfa1bc);
    goto LAB_014e600c;
  case 1:
    iVar1 = FUN_012fb940(&local_20,
                         (&PTR_s_cannot_parse_integer_from_empty_s_01d327f0)[param_2 & 0xff],
                         *(undefined4 *)(&DAT_0053712c + (param_2 & 0xff) * 4));
    goto LAB_014e600c;
  case 3:
    uVar3 = 0xf;
    puVar2 = &DAT_00531083;
    break;
  case 4:
    uVar3 = 10;
    puVar2 = &DAT_00531092;
  }
  iVar1 = FUN_005fdd28(&local_30,puVar2,uVar3);
LAB_014e600c:
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01cfa1d4,&DAT_01d30334);
  }
  local_40 = local_30;
  uStack_3c = local_2c;
  uStack_38 = local_28;
  FUN_01966564();
  return;
}

