// FUN_013c9fdc @ 013c9fdc size=860 calls_out=7 calls_in=2
// strings: 

void FUN_013c9fdc(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int local_2b8 [2];
  char cStack_2af;
  int iStack_2b0;
  int iStack_2ac;
  int local_2a8;
  int local_2a4;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int local_294;
  int local_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  uint local_280;
  int iStack_27c;
  int iStack_278;
  undefined1 auStack_128 [260];
  
  if (param_3 != 0) {
    iVar6 = param_3 << 4;
    iVar9 = param_2;
    do {
      if (iVar6 == 0) {
        if (param_3 == 1) {
          if (*(int *)(param_2 + 8) == 1) {
            puVar3 = *(undefined1 **)(param_2 + 4);
            *param_1 = 0x80000000;
            *(undefined1 *)(param_1 + 1) = *puVar3;
            return;
          }
          goto LAB_013ca138;
        }
        if (param_3 == 2) {
          uVar7 = 0;
          if (*(int *)(param_2 + 8) == 1) {
            bVar8 = false;
            if (*(int *)(param_2 + 0x18) == 1) {
              puVar5 = *(undefined1 **)(param_2 + 4);
              puVar3 = *(undefined1 **)(param_2 + 0x14);
              *param_1 = 0x80000001;
              uVar1 = *puVar5;
              *(undefined1 *)((int)param_1 + 5) = *puVar3;
              *(undefined1 *)(param_1 + 1) = uVar1;
              return;
            }
          }
          else {
LAB_013ca100:
            uVar7 = 0;
            bVar8 = false;
          }
        }
        else {
          uVar7 = 0;
          if (((param_3 != 3) || (*(int *)(param_2 + 8) != 1)) || (*(int *)(param_2 + 0x18) != 1))
          goto LAB_013ca100;
          bVar8 = false;
          if (*(int *)(param_2 + 0x28) == 1) {
            uVar7 = (uint)**(byte **)(param_2 + 0x14) << 0x10 | (uint)**(byte **)(param_2 + 4) << 8
                    | (uint)**(byte **)(param_2 + 0x24) << 0x18;
            bVar8 = true;
          }
        }
        if (bVar8) {
          *param_1 = 0x80000002;
          *(char *)((int)param_1 + 6) = (char)(uVar7 >> 0x18);
          *(short *)(param_1 + 1) = (short)(uVar7 >> 8);
          return;
        }
        if (param_3 == 1) {
LAB_013ca138:
          FUN_013814c0(local_2b8,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
          if ((local_280 & 1) == 0) {
            if (iStack_278 == 0) {
              iVar6 = 1;
            }
            else {
              iVar6 = FUN_0063f47c(iStack_278,1);
              if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(1,iStack_278);
              }
            }
            FUN_016dd1aa(iVar6,iStack_27c,iStack_278);
          }
          else {
            iVar6 = iStack_27c;
          }
          piVar4 = (int *)((uint)local_2b8 | 4);
          *piVar4 = local_2b8[0];
          piVar4[1] = local_2b8[1];
          piVar4[2] = iStack_2b0;
          piVar4[3] = iStack_2ac;
          piVar4[4] = local_2a8;
          piVar4[5] = local_2a4;
          piVar4[6] = iStack_2a0;
          piVar4[7] = iStack_29c;
          piVar4[8] = iStack_298;
          piVar4[9] = local_294;
          piVar4[10] = local_290;
          piVar4[0xb] = iStack_28c;
          piVar4[0xc] = iStack_288;
          piVar4[0xd] = iStack_284;
          *param_1 = 0x80000003;
          param_1[1] = local_2b8[0];
          param_1[2] = local_2b8[1];
          param_1[3] = iStack_2b0;
          param_1[4] = iStack_2ac;
          param_1[5] = local_2a8;
          param_1[6] = local_2a4;
          param_1[7] = iStack_2a0;
          param_1[8] = iStack_29c;
          param_1[9] = iStack_298;
          param_1[10] = local_294;
          param_1[0xb] = local_290;
          param_1[0xc] = iStack_28c;
          param_1[0xd] = iStack_288;
          param_1[0xe] = iStack_284;
          param_1[0xf] = local_280;
          param_1[0x10] = 1;
          param_1[0x11] = iVar6;
          param_1[0x12] = iStack_278;
          return;
        }
        FUN_013ca338(local_2b8);
        if (local_2b8[0] != -0x80000000) {
          FUN_016dd1aa(param_1,local_2b8,400);
          return;
        }
        iVar6 = 0;
        FUN_016dd606(local_2b8,0,0x100);
        goto LAB_013ca1e0;
      }
      piVar4 = (int *)(iVar9 + 8);
      iVar6 = iVar6 + -0x10;
      iVar9 = iVar9 + 0x10;
    } while (*piVar4 != 0);
  }
  *param_1 = 0x80000007;
  return;
  while( true ) {
    iVar6 = iVar6 + -0x10;
    *(undefined1 *)((int)local_2b8 + (uint)**(byte **)(iVar9 + 4)) = 1;
    if (param_3 * -0x10 == iVar6) break;
LAB_013ca1e0:
    iVar9 = param_2 - iVar6;
    if (*(int *)(iVar9 + 8) != 1) goto LAB_013ca22c;
  }
  cVar2 = (char)local_2b8[0];
  FUN_016dd1aa(auStack_128,(uint)local_2b8 | 1,0xff);
  if (cVar2 != '\x02') {
    *(char *)(param_1 + 1) = cVar2;
    FUN_016dd1aa((int)param_1 + 5,auStack_128,0xff);
    *param_1 = 0x80000005;
    return;
  }
LAB_013ca22c:
  FUN_013ca6cc(local_2b8,param_2,param_3);
  if (cStack_2af == '\x03') {
    *param_1 = 0x80000007;
    return;
  }
  *param_1 = 0x80000006;
  param_1[1] = local_2b8[0];
  param_1[2] = local_2b8[1];
  param_1[3] = iStack_2b0;
  return;
}

