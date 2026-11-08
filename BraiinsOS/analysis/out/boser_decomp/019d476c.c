// FUN_019d476c @ 019d476c size=264 calls_out=4 calls_in=0
// strings: adding

void FUN_019d476c(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int local_38;
  undefined1 local_34;
  undefined1 auStack_33 [19];
  
  if (param_3 == 0) {
    local_34 = 3;
  }
  else {
    piVar4 = param_2;
    do {
      iVar2 = piVar4[1];
      if (iVar2 != 7) {
LAB_019d4810:
        FUN_006643f0(&local_38,*piVar4,iVar2);
        FUN_0160ec7c(param_1 + 2,&local_38);
        iVar2 = piVar4[2];
        *param_1 = 2;
        param_1[1] = iVar2;
        return;
      }
      piVar5 = piVar4 + 8;
      iVar2 = 0;
      while (iVar2 != 7) {
        uVar1 = (uint)*(byte *)(*piVar4 + iVar2);
        uVar3 = (uint)(byte)"p"[iVar2];
        iVar2 = iVar2 + 1;
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar1 != uVar3) {
          iVar2 = 7;
          goto LAB_019d4810;
        }
      }
      FUN_019d41cc(&local_38,piVar4 + 4);
      if (local_38 != 7) {
        FUN_01bed4e2((int)param_1 + 5,auStack_33,0x13);
        *(undefined1 *)(param_1 + 1) = local_34;
        *param_1 = local_38;
        return;
      }
      piVar4 = piVar5;
    } while (piVar5 != param_2 + param_3 * 8);
  }
  *(undefined1 *)(param_1 + 1) = local_34;
  *param_1 = 7;
  return;
}

