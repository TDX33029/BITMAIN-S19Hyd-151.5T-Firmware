// FUN_00603390 @ 00603390 size=256 calls_out=1 calls_in=1
// strings: 

void FUN_00603390(uint *param_1,uint *param_2,undefined1 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_2;
  iVar3 = 0x13 - uVar1;
  if (0x13 < uVar1) {
    iVar3 = 0;
  }
  if (uVar1 < 0x13) {
    *(undefined1 *)((int)param_2 + uVar1 + 4) = *param_3;
    if (param_4 == 1) goto LAB_00603468;
    uVar2 = uVar1 + 1;
    if (iVar3 != 1) {
      *(undefined1 *)((int)param_2 + uVar1 + 5) = param_3[1];
      if (param_4 == 2) goto LAB_00603468;
      uVar2 = uVar1 + 2;
      if (iVar3 != 2) {
        *(undefined1 *)((int)param_2 + uVar1 + 6) = param_3[2];
        if (param_4 == 3) goto LAB_00603468;
        uVar2 = uVar1 + 3;
        if (iVar3 != 3) {
          *(undefined1 *)((int)param_2 + uVar1 + 7) = param_3[3];
          if (param_4 == 4) goto LAB_00603468;
          uVar2 = uVar1 + 4;
          if (iVar3 != 4) {
            *(undefined1 *)((int)param_2 + uVar1 + 8) = param_3[4];
            if (param_4 == 5) goto LAB_00603468;
            uVar2 = uVar1 + 5;
            if (iVar3 != 5) {
              *(undefined1 *)((int)param_2 + uVar1 + 9) = param_3[5];
              if (param_4 == 6) {
LAB_00603468:
                *param_2 = uVar1 + param_4;
                uVar1 = param_2[1];
                uVar2 = param_2[2];
                uVar4 = param_2[3];
                uVar5 = param_2[4];
                uVar6 = param_2[5];
                *param_1 = *param_2;
                param_1[1] = uVar1;
                param_1[2] = uVar2;
                param_1[3] = uVar4;
                param_1[4] = uVar5;
                param_1[5] = uVar6;
                return;
              }
              uVar2 = uVar1 + 6;
              if (iVar3 != 6) {
                *(undefined1 *)((int)param_2 + uVar1 + 10) = param_3[6];
                goto LAB_00603468;
              }
            }
          }
        }
      }
    }
    uVar1 = uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar1,0x13,&DAT_01857660);
}

