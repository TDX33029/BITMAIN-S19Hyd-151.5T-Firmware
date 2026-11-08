// FUN_012865a4 @ 012865a4 size=504 calls_out=4 calls_in=2
// strings: 

void FUN_012865a4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_r2;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  char *local_24;
  int local_20;
  int local_1c;
  
  FUN_012867b0(&local_24,param_2,param_3,param_4,&DAT_01c25ce8,&DAT_01c25d3c);
  if (local_24 != (char *)0x0) {
    if (local_20 == 0) {
      uVar5 = 4;
LAB_012866ec:
      *(undefined1 *)(param_1 + 1) = uVar5;
      *param_1 = 0;
      return;
    }
    cVar1 = *local_24;
    if (cVar1 != ' ') {
      uVar5 = extraout_r2;
      if (cVar1 != 'T') {
        uVar5 = 3;
      }
      if (cVar1 != 'T' && cVar1 != 't') goto LAB_012866ec;
    }
    if ((local_20 != 1) && (local_24[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(local_24,local_20,1,local_20,&DAT_01c25d3c);
    }
    FUN_012867b0(&local_24,param_2,local_24 + 1,local_20 + -1,&DAT_01c25d4c,&DAT_01c25db8);
    if (local_24 != (char *)0x0) {
      uVar8 = FUN_0073498c(local_24,local_20);
      iVar4 = (int)(uVar8 >> 0x20);
      iVar2 = (int)uVar8;
      if (0x2ffffffff < uVar8) {
        iVar3 = 0;
        do {
          if (iVar3 == 3) {
            if ((iVar4 != 3) && (*(char *)(iVar2 + 3) < -0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(iVar2,iVar4,3,iVar4,&DAT_01c25db8);
            }
            local_24 = (char *)(iVar2 + 3);
            local_20 = iVar4 + -3;
            local_1c = 0;
            goto LAB_0128672c;
          }
          uVar7 = (uint)*(byte *)(iVar2 + iVar3);
          uVar6 = (uint)(byte)(&DAT_0041a246)[iVar3];
          iVar3 = iVar3 + 1;
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
        } while (uVar6 == uVar7);
      }
      FUN_0128d658(&local_24,iVar2,iVar4,1,0);
      if (local_24 == (char *)0x0) {
        *param_1 = 0;
      }
      else {
LAB_0128672c:
        if ((*(int *)(param_2 + 0xa0) != 1) || (*(int *)(param_2 + 0xa4) == local_1c)) {
          *param_1 = local_24;
          param_1[1] = local_20;
          *(undefined4 *)(param_2 + 0xa0) = 1;
          *(int *)(param_2 + 0xa4) = local_1c;
          return;
        }
        *param_1 = 0;
        local_20._0_1_ = 1;
      }
      goto LAB_012866e0;
    }
  }
  *param_1 = 0;
LAB_012866e0:
  *(undefined1 *)(param_1 + 1) = (undefined1)local_20;
  return;
}

