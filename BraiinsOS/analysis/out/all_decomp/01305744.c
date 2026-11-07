// FUN_01305744 @ 01305744 size=324 calls_out=2 calls_in=0
// strings: 

void FUN_01305744(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *local_1c;
  undefined4 **local_18;
  undefined4 ***local_14;
  
  uVar7 = *(uint *)(param_2 + 8);
  uVar9 = *(uint *)(param_2 + 0xc);
  if (uVar7 < uVar9) {
LAB_01305828:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar9,uVar7,&DAT_01890988);
  }
  if (uVar9 != 0) {
    iVar2 = *(int *)(param_2 + 4);
    iVar4 = iVar2 + uVar9 * 0x78;
    do {
      uVar7 = *(uint *)(iVar2 + 0x38);
      uVar9 = *(uint *)(iVar2 + 0x3c);
      if (uVar7 < uVar9) goto LAB_01305828;
      iVar6 = *(int *)(iVar2 + 0x34);
      iVar8 = uVar9 * 0x1c;
      while (iVar8 != 0) {
        if (*(char *)(iVar6 + 0xc) != '\x01') goto LAB_013057cc;
        pcVar1 = (char *)(iVar6 + 0x18);
        iVar8 = iVar8 + -0x1c;
        iVar6 = iVar6 + 0x1c;
        if (*pcVar1 == '\x02') {
LAB_013057cc:
          local_1c = &DAT_018d888c;
          DataMemoryBarrier(0xb);
          if (DAT_018d888c != 0) {
            local_18 = &local_1c;
            local_14 = &local_18;
            FUN_015eedc4(&DAT_018d888c,0,&local_14,&DAT_0188f21c,&DAT_0188e9dc);
          }
          iVar2 = *(int *)(DAT_018d8890 + 0x68);
          if (*(char *)(iVar2 + 0xc) == '\0') {
            uVar3 = 0;
            uVar5 = 1;
          }
          else {
            uVar5 = *(undefined4 *)(iVar2 + 4);
            uVar3 = *(undefined4 *)(iVar2 + 8);
          }
          param_1[1] = uVar5;
          *param_1 = 3;
          param_1[2] = uVar3;
          return;
        }
      }
      iVar2 = iVar2 + 0x78;
    } while (iVar2 != iVar4);
  }
  *param_1 = 4;
  return;
}

