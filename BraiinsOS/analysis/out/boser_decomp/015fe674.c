// FUN_015fe674 @ 015fe674 size=264 calls_out=1 calls_in=0
// strings: 

void FUN_015fe674(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 **local_20;
  undefined2 *local_1c;
  undefined1 **local_18;
  undefined *local_14;
  
  puVar3 = (undefined1 *)*param_1;
  iVar4 = param_2[1];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar3) {
  case 0:
    uVar2 = 0x15;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    puVar1 = &UNK_004ba546;
    break;
  case 1:
    local_2c = *(undefined1 **)(puVar3 + 4);
    local_28 = *(undefined4 *)(puVar3 + 8);
    puVar1 = &DAT_00574a81;
    local_1c = &DAT_0132b6a0;
    goto LAB_015fe75c;
  case 2:
    local_2c = *(undefined1 **)(puVar3 + 4);
    local_28 = *(undefined4 *)(puVar3 + 8);
    local_24 = puVar3 + 1;
    local_18 = &local_24;
    puVar1 = &DAT_0059cedd;
    local_14 = &DAT_01601ebc;
    local_1c = &DAT_0132b6a0;
    goto LAB_015fe75c;
  case 3:
    local_2c = puVar3 + 1;
    puVar1 = &DAT_0057fe89;
    local_1c = (undefined2 *)&DAT_01601ebc;
LAB_015fe75c:
    local_20 = &local_2c;
    FUN_012fa178(*param_2,iVar4,puVar1,&local_20);
    return;
  case 4:
    uVar2 = 0xc;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    puVar1 = &UNK_004ba55b;
    break;
  case 5:
    uVar2 = 0x14;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    puVar1 = &UNK_004ba567;
  }
                    /* WARNING: Could not recover jumptable at 0x015fe790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,puVar1,uVar2);
  return;
}

