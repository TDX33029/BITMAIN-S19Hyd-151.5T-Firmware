// FUN_014c41b8 @ 014c41b8 size=304 calls_out=0 calls_in=1
// strings: 

int FUN_014c41b8(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  
  if ((int *)*param_1 == (int *)param_1[1]) {
    iVar5 = 0;
  }
  else {
    pbVar8 = (byte *)param_1[2];
    pbVar9 = (byte *)param_1[3];
    pbVar7 = (byte *)param_1[4];
    piVar4 = (int *)*param_1;
    do {
      piVar6 = piVar4;
      iVar5 = *piVar6;
      bVar1 = *(byte *)(iVar5 + 0x29);
      bVar10 = *pbVar8 < bVar1;
      if ((*pbVar8 == bVar1) &&
         (bVar10 = pbVar8[1] < *(byte *)(iVar5 + 0x2a), pbVar8[1] == *(byte *)(iVar5 + 0x2a))) {
        bVar10 = *(byte *)(iVar5 + 0x2b);
        if (pbVar8[2] == 0) goto LAB_014c4228;
        if (pbVar8[2] < bVar10) goto LAB_014c4230;
      }
      else {
LAB_014c4228:
        if (bVar10 != 0) {
LAB_014c4230:
          bVar10 = *pbVar9;
          bVar3 = bVar1 < bVar10 || bVar1 == bVar10;
          if ((bVar1 != bVar10) ||
             (bVar10 = pbVar9[1], bVar2 = *(byte *)(iVar5 + 0x2a),
             bVar3 = bVar2 < bVar10 || bVar2 == bVar10, bVar2 != bVar10)) {
            if (bVar3) goto LAB_014c4280;
          }
          else if ((*(byte *)(iVar5 + 0x2b) == 0) || (*(byte *)(iVar5 + 0x2b) <= pbVar9[2])) {
LAB_014c4280:
            if ((*(char *)(iVar5 + 0x40) != '\0') ||
               (((bVar1 == *pbVar7 && (*(byte *)(iVar5 + 0x2a) == pbVar7[1])) &&
                (pbVar7[2] == *(byte *)(iVar5 + 0x2b))))) goto LAB_014c42d8;
          }
        }
      }
      piVar4 = piVar6 + 1;
    } while (piVar6 + 1 != (int *)param_1[1]);
    iVar5 = 0;
LAB_014c42d8:
    *param_1 = piVar6 + 1;
  }
  return iVar5;
}

