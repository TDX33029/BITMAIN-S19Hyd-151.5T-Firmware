// FUN_0190daa8 @ 0190daa8 size=364 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_0190daa8(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_450 [528];
  int *local_240 [135];
  
  uVar6 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar6,0x20,&DAT_01d2575c);
  }
  iVar3 = *param_1;
  iVar9 = param_1[1];
  iVar10 = param_1[2];
  iVar8 = param_1[3];
  puVar5 = (undefined4 *)param_1[4];
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  (*(code *)*puVar5)(local_240,param_2,uVar6);
  piVar1 = local_240[0];
  if (local_240[0] == (int *)0x2) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_240,&DAT_01d24ff8,&DAT_01d250c8);
  }
  FUN_01bed4e2(auStack_450,(uint)local_240 | 4,0x20c);
  iVar4 = 0;
  do {
    *(undefined1 *)(param_2 + iVar4) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x20);
  local_240[0] = (int *)0x0;
  iVar4 = FUN_01be5878(local_240,0x10,0x240);
  piVar2 = local_240[0];
  if ((iVar4 != 0) || (local_240[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x10,0x240);
  }
  piVar7 = local_240[0] + 0x88;
  *local_240[0] = (int)piVar1;
  FUN_01bed4e2(local_240[0] + 1,auStack_450,0x20c);
  *piVar7 = iVar3;
  piVar2[0x89] = iVar9;
  piVar2[0x8a] = iVar10;
  piVar2[0x8b] = iVar8;
  piVar2[0x84] = (int)puVar5;
  FUN_01bed4e2(piVar2 + 0x8c,param_3,0xc);
  return CONCAT44(&UNK_01d250d8,piVar2);
}

