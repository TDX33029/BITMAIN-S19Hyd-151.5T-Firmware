// FUN_0176d3a0 @ 0176d3a0 size=372 calls_out=7 calls_in=0
// strings: 

undefined8 FUN_0176d3a0(uint param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 auStack_60 [32];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar2 = FUN_0174bccc(auStack_60,0x40,&PTR_018bc3f4,0);
  if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  FUN_0176cb80(param_1,param_2,auStack_60);
  uVar3 = param_2 + 0x480;
  if (uVar3 < param_1) {
    if (param_1 < param_2 + 0x920U) goto LAB_0176d50c;
  }
  else if ((param_1 < uVar3) && (uVar3 < param_1 + 0x4a0)) goto LAB_0176d50c;
  FUN_016dd1aa(uVar3,param_1,0x4a0);
  FUN_017572d0(param_1,0x4a0,param_2 + 0x920);
  puVar4 = (undefined4 *)(param_2 + 0x940);
  if (((&local_40 <= puVar4) || ((undefined4 *)(param_2 + 0x960U) <= &local_40)) &&
     (&uStack_20 <= puVar4 || puVar4 <= &local_40)) {
    *(undefined4 *)(param_2 + 0x940) = local_40;
    *(undefined4 *)(param_2 + 0x944) = uStack_3c;
    *(undefined4 *)(param_2 + 0x948) = uStack_38;
    *(undefined4 *)(param_2 + 0x94c) = uStack_34;
    *(undefined4 *)(param_2 + 0x950) = local_30;
    *(undefined4 *)(param_2 + 0x954) = uStack_2c;
    *(undefined4 *)(param_2 + 0x958) = uStack_28;
    *(undefined4 *)(param_2 + 0x95c) = uStack_24;
    FUN_0177aaa0(auStack_60,0x40);
    if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 0;
  }
LAB_0176d50c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x176d50c);
  (*pcVar1)();
}

