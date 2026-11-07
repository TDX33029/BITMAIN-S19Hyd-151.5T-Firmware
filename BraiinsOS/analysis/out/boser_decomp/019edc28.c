// FUN_019edc28 @ 019edc28 size=384 calls_out=8 calls_in=1
// strings: 

undefined1 FUN_019edc28(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar1 = FUN_019ec670(param_2);
  uVar3 = 0;
  if ((uVar1 & 0xff) != 2) {
    uVar3 = uVar1;
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar3 & 0xffffff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x11)) {
    case 0:
      *(undefined1 *)(param_1 + 4) = 0;
      *param_1 = param_1[2];
      param_1[1] = param_1[3];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d295f0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d295f0);
    case 4:
      goto switchD_019edc74_caseD_4;
    }
    while( true ) {
      FUN_019ebea4(&local_40,*param_1);
      uVar4 = 1;
      *(undefined1 *)(param_1 + 4) = 1;
      DataMemoryBarrier(0xb);
      uVar1 = *(uint *)(*param_1 + 0x94) & 0xfffffffe;
      if (*(uint *)param_1[1] != uVar1) break;
      if ((*(uint *)(*param_1 + 0x94) & 1) != 0) goto LAB_019edd70;
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[5] = local_40;
      param_1[6] = iStack_3c;
      param_1[7] = iStack_38;
      param_1[8] = iStack_34;
      param_1[9] = local_30;
      param_1[10] = iStack_2c;
      param_1[0xb] = iStack_28;
      param_1[0xc] = iStack_24;
switchD_019edc74_caseD_4:
      iVar2 = FUN_019e0cbc(param_1 + 5,param_2);
      if (iVar2 != 0) {
        *(undefined1 *)((int)param_1 + 0x11) = 4;
        if ((uVar3 >> 8 & 1) != 0) {
          uVar5 = thunk_FUN_01bee35a(4,0x20);
          iVar2 = (int)uVar5 + (int)((ulonglong)uVar5 >> 0x20);
          if (*(char *)(iVar2 + 0x38) != '\x01') {
            if (*(char *)(iVar2 + 0x38) == '\x02') {
              return 2;
            }
            FUN_019a2bcc(iVar2,&LAB_019efb68);
            *(undefined1 *)(iVar2 + 0x38) = 1;
          }
          *(char *)(iVar2 + 0x31) = (char)(uVar3 >> 0x10);
          *(char *)(iVar2 + 0x30) = (char)(uVar3 >> 8);
        }
        goto LAB_019edc54;
      }
      FUN_019ede44(param_1 + 5);
      *(undefined1 *)(param_1 + 4) = 0;
    }
    uVar4 = 0;
    *(uint *)param_1[1] = uVar1;
LAB_019edd70:
    FUN_019ede44(&local_40);
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
  }
  else {
LAB_019edc54:
    uVar4 = 2;
  }
  return uVar4;
}

