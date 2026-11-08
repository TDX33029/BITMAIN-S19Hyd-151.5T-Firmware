// FUN_013d6a4c @ 013d6a4c size=184 calls_out=1 calls_in=1
// strings: 

void FUN_013d6a4c(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 local_1c [12];
  
  iVar5 = *(int *)(param_2 + 0xc);
  if (iVar5 != 0) {
    puVar7 = *(undefined1 **)(param_2 + 8);
    uVar1 = *puVar7;
    *(undefined1 **)(param_2 + 8) = puVar7 + 1;
    *(int *)(param_2 + 0xc) = iVar5 + -1;
    if (iVar5 + -1 != 0) {
      uVar2 = puVar7[1];
      *(undefined1 **)(param_2 + 8) = puVar7 + 2;
      *(int *)(param_2 + 0xc) = iVar5 + -2;
      if (iVar5 + -2 != 0) {
        uVar3 = puVar7[2];
        *(undefined1 **)(param_2 + 8) = puVar7 + 3;
        *(int *)(param_2 + 0xc) = iVar5 + -3;
        if (iVar5 + -3 != 0) {
          *(undefined1 **)(param_2 + 8) = puVar7 + 4;
          *param_1 = 0;
          uVar4 = puVar7[3];
          *(int *)(param_2 + 0xc) = iVar5 + -4;
          *(uint *)(param_1 + 1) = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
          return;
        }
      }
    }
  }
  local_1c[0] = 0;
  uVar6 = FUN_013e677c(local_1c);
  *(undefined4 *)(param_1 + 4) = uVar6;
  *param_1 = 1;
  return;
}

