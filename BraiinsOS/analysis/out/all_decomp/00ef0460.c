// FUN_00ef0460 @ 00ef0460 size=576 calls_out=9 calls_in=2
// strings: 

void FUN_00ef0460(int *param_1,int param_2)

{
  int **ppiVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_40;
  undefined1 *local_3c;
  int local_38;
  int *local_34;
  undefined4 local_30;
  int **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_3c = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (local_3c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_34 = &local_40;
  *local_3c = 0x7b;
  local_38 = 1;
  local_2c = &local_34;
  local_40 = 0x80;
  local_30 = CONCAT22(local_30._2_2_,0x100);
  iVar2 = FUN_00e63424(&local_30,param_2);
  ppiVar1 = local_2c;
  if (iVar2 == 0) {
    if ((char)local_30 == '\x01') {
      local_28 = 10;
      iVar2 = FUN_0157c50c(&local_28,0,0);
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x70);
      if (local_30._1_1_ != '\x01') {
        piVar4 = *local_2c;
        iVar2 = piVar4[2];
        if (*piVar4 == iVar2) {
          FUN_00edff4c(piVar4,iVar2,1,1,1);
          iVar2 = piVar4[2];
        }
        *(undefined1 *)(piVar4[1] + iVar2) = 0x2c;
        piVar4[2] = iVar2 + 1;
      }
      local_30._0_2_ = CONCAT11(2,(char)local_30);
      FUN_00e5d350(&local_28,*ppiVar1,&DAT_00569478,4);
      if ((char)local_28 == '\x04') {
        piVar4 = *ppiVar1;
        iVar2 = piVar4[2];
        if (*piVar4 == iVar2) {
          FUN_00edff4c(piVar4,iVar2,1,1,1);
          iVar2 = piVar4[2];
        }
        *(undefined1 *)(piVar4[1] + iVar2) = 0x3a;
        piVar4[2] = iVar2 + 1;
        iVar2 = FUN_00e5c920(uVar3,ppiVar1);
        if (iVar2 == 0) {
          if (((local_30 & 0xff00) != 0) && ((local_30 & 1) == 0)) {
            piVar4 = *ppiVar1;
            iVar2 = piVar4[2];
            if (*piVar4 == iVar2) {
              FUN_00edff4c(piVar4,iVar2,1,1,1);
              iVar2 = piVar4[2];
            }
            *(undefined1 *)(piVar4[1] + iVar2) = 0x7d;
            piVar4[2] = iVar2 + 1;
          }
          *param_1 = local_40;
          param_1[1] = (int)local_3c;
          param_1[2] = local_38;
          return;
        }
      }
      else {
        iVar2 = FUN_0157c4a0(local_28,local_24);
      }
    }
  }
  *param_1 = -0x80000000;
  param_1[1] = iVar2;
  if (local_40 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_3c);
  return;
}

