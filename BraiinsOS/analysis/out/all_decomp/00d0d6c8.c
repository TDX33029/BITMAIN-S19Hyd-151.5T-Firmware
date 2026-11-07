// FUN_00d0d6c8 @ 00d0d6c8 size=308 calls_out=4 calls_in=0
// strings: 

void FUN_00d0d6c8(int param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int local_150 [76];
  
  iVar3 = FUN_016343a0(param_1,param_1 + 0x158,*param_3,param_3[1]);
  if (iVar3 == 0) {
    return;
  }
  FUN_016dd1aa(local_150,param_1 + 0x28,0x130);
  *(undefined4 *)(param_1 + 0x28) = 2;
  if (local_150[0] != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00413073,0x45,&DAT_018ac3a0);
  }
  iVar6 = *(int *)(param_1 + 0x30);
  iVar8 = *(int *)(param_1 + 0x34);
  iVar10 = *(int *)(param_1 + 0x38);
  iVar13 = *(int *)(param_1 + 0x3c);
  iVar7 = *(int *)(param_1 + 0x40);
  iVar9 = *(int *)(param_1 + 0x44);
  iVar11 = *(int *)(param_1 + 0x48);
  iVar14 = *(int *)(param_1 + 0x4c);
  iVar3 = *param_2;
  if (iVar3 == 9) goto LAB_00d0d7cc;
  if (iVar3 == 0) {
    bVar1 = *(byte *)(param_2 + 2);
    cVar2 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar2 = '\x04';
    }
    iVar4 = 0xc;
    if ((cVar2 != '\x05') && (cVar2 != '\x04' || bVar1 != 3)) goto LAB_00d0d7cc;
  }
  else {
    if (iVar3 == 8) {
      iVar3 = param_2[4];
      if (iVar3 != 0) {
        puVar12 = (undefined4 *)param_2[5];
        pcVar5 = (code *)*puVar12;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(iVar3);
        }
        if (puVar12[1] != 0) {
          thunk_FUN_016d3fb4(iVar3);
        }
      }
      goto LAB_00d0d7cc;
    }
    iVar4 = 4;
    if (iVar3 != 2) goto LAB_00d0d7cc;
  }
  (**(code **)**(undefined4 **)((int)param_2 + iVar4))();
LAB_00d0d7cc:
  *param_2 = iVar6;
  param_2[1] = iVar8;
  param_2[2] = iVar10;
  param_2[3] = iVar13;
  param_2[4] = iVar7;
  param_2[5] = iVar9;
  param_2[6] = iVar11;
  param_2[7] = iVar14;
  return;
}

