// FUN_00653acc @ 00653acc size=400 calls_out=3 calls_in=3
// strings: 

void FUN_00653acc(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_40;
  uint local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*(uint *)(param_2 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,*(uint *)(param_2 + 8),&DAT_01c03388);
  }
  piVar1 = (int *)(*(int *)(param_2 + 4) + param_3 * 0x14);
  if (piVar1[1] == 0) {
    if (*piVar1 == 0) {
      uVar5 = 0;
      iVar6 = 0;
      while( true ) {
        FUN_00653968(&local_40,param_2);
        if (local_40 != 3) {
          param_1[2] = local_38;
          param_1[3] = iStack_34;
          param_1[4] = iStack_30;
          param_1[5] = iStack_2c;
          *param_1 = local_40;
          param_1[1] = local_3c;
          return;
        }
        uVar3 = *(uint *)(param_2 + 0x14);
        if (uVar3 <= local_3c) break;
        iVar4 = *(int *)(param_2 + 0x10);
        puVar2 = (undefined1 *)(iVar4 + local_3c * 9);
        *puVar2 = (char)iVar6;
        *(undefined4 *)(puVar2 + 5) = 0;
        *(undefined4 *)(puVar2 + 1) = param_4;
        if (uVar5 == 0) {
          if (*(uint *)(param_2 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(param_3,*(uint *)(param_2 + 8),&DAT_01c033d8);
          }
          *(uint *)(*(int *)(param_2 + 4) + param_3 * 0x14) = local_3c;
        }
        else {
          if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar5,uVar3,&DAT_01c033c8);
          }
          *(uint *)(iVar4 + uVar5 * 9 + 5) = local_3c;
        }
        bVar7 = iVar6 == 0xff;
        uVar5 = local_3c;
        iVar6 = iVar6 + 1;
        if (bVar7) {
          *param_1 = 3;
          return;
        }
      }
      goto LAB_00653c1c;
    }
  }
  else {
    piVar1 = (int *)FUN_0066193c(piVar1 + 1,&DAT_003d3ef8,0x37,&DAT_01c03398);
  }
  FUN_0066193c(piVar1,&DAT_0056c5a8,0x41,&DAT_01c033a8);
  uVar3 = extraout_r1;
  local_3c = extraout_r3;
LAB_00653c1c:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(local_3c,uVar3,&DAT_01c033b8);
}

