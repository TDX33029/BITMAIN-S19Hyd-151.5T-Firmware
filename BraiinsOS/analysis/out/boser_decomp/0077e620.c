// FUN_0077e620 @ 0077e620 size=428 calls_out=4 calls_in=1
// strings: 

void FUN_0077e620(undefined2 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_110 [68];
  short local_cc;
  short local_ca;
  undefined1 auStack_c8 [156];
  uint local_2c;
  
  FUN_01bed4e2(auStack_110,param_3,0xe8);
  iVar8 = param_2[1];
  sVar1 = *(short *)(iVar8 + 0x44);
  uVar7 = *(uint *)*param_2;
  if (local_2c < *(uint *)*param_2) {
    uVar7 = local_2c;
  }
  if ((sVar1 == local_cc) && ((sVar1 != 6 && sVar1 != 5 || (*(short *)(iVar8 + 0x46) == local_ca))))
  {
    uVar6 = (uint)*(ushort *)(iVar8 + 0x48);
    if (uVar6 == 3) {
LAB_0077e694:
      psVar5 = (short *)param_2[2];
      psVar4 = *(short **)(psVar5 + 2);
      if (*psVar5 != 2) {
        psVar4 = psVar5;
      }
      iVar3 = FUN_013cad2c(psVar4,auStack_110);
      if ((iVar3 == 0) && (iVar3 = FUN_013cad2c(iVar8,auStack_110), iVar3 == 0)) goto LAB_0077e6fc;
LAB_0077e764:
      *(undefined1 *)param_2[3] = 1;
      param_3 = auStack_110;
    }
    else {
      uVar2 = *(ushort *)(iVar8 + 0x4a);
      uVar9 = FUN_013c7920(auStack_c8);
      if ((uVar6 == ((uint)uVar9 & 0xffff)) &&
         ((uVar6 != 0x24 || ((uint)uVar2 == ((uint)((ulonglong)uVar9 >> 0x20) & 0xffff)))))
      goto LAB_0077e694;
LAB_0077e6fc:
      if ((*(char *)param_2[4] == '\0') || (sVar1 = FUN_013c7920(auStack_c8), sVar1 != 9)) {
        sVar1 = *(short *)(iVar8 + 0x48);
        if (sVar1 == 0x1e) {
          uVar2 = FUN_013c7920(auStack_c8);
          if (1 < uVar2) goto LAB_0077e7b4;
          psVar5 = (short *)param_2[2];
          psVar4 = *(short **)(psVar5 + 2);
          if (*psVar5 != 2) {
            psVar4 = psVar5;
          }
          iVar3 = FUN_013cad2c(psVar4,auStack_110);
          if (iVar3 != 0) goto LAB_0077e764;
          sVar1 = *(short *)(iVar8 + 0x48);
        }
        if ((sVar1 != 0x13) || (uVar2 = FUN_013c7920(auStack_c8), 1 < uVar2)) goto LAB_0077e7b4;
      }
    }
    FUN_01bed4e2(param_1,param_3,0xe8);
    *(uint *)(param_1 + 0x74) = uVar7;
  }
  else {
LAB_0077e7b4:
    *param_1 = 2;
    FUN_0077e7e4(param_3);
  }
  return;
}

