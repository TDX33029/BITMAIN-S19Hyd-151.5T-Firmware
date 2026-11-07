// FUN_01898838 @ 01898838 size=256 calls_out=0 calls_in=9
// strings: 

int FUN_01898838(int *param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = param_1[1];
  uVar10 = param_1[2];
  if (uVar10 < uVar9) {
    iVar5 = *param_1;
    uVar4 = uVar10 + 1;
    param_1[2] = uVar4;
    bVar1 = *(byte *)(iVar5 + uVar10);
    if (((~bVar1 & 0x1f) != 0) && (uVar4 < uVar9)) {
      bVar8 = *(byte *)(iVar5 + uVar4);
      uVar4 = (uint)bVar8;
      uVar7 = uVar10 + 2;
      param_1[2] = uVar7;
      if ((char)bVar8 < '\0') {
        if (uVar4 == 0x81) {
          if (uVar7 < uVar9) {
            bVar8 = *(byte *)(iVar5 + uVar7);
            uVar4 = (uint)bVar8;
            uVar7 = uVar10 + 3;
            param_1[2] = uVar7;
            if ((char)bVar8 < '\0') goto LAB_01898890;
          }
        }
        else if ((uVar4 == 0x82) && (uVar7 < uVar9)) {
          cVar2 = *(char *)(iVar5 + uVar7);
          uVar4 = uVar10 + 3;
          param_1[2] = uVar4;
          if (uVar4 < uVar9) {
            uVar3 = *(undefined1 *)(iVar5 + uVar4);
            uVar7 = uVar10 + 4;
            param_1[2] = uVar7;
            if (cVar2 != '\0') {
              uVar4 = (uint)CONCAT11(cVar2,uVar3);
              goto LAB_01898890;
            }
          }
        }
      }
      else {
LAB_01898890:
        iVar6 = 0;
        if (!CARRY4(uVar7,uVar4)) {
          bVar8 = 0;
          if (uVar7 + uVar4 <= uVar9) {
            iVar6 = iVar5 + uVar7;
            param_1[2] = uVar7 + uVar4;
            bVar8 = bVar1;
          }
          goto LAB_01898924;
        }
      }
    }
  }
  iVar6 = 0;
  bVar8 = 0;
LAB_01898924:
  iVar5 = 0;
  if (param_2 == bVar8) {
    iVar5 = iVar6;
  }
  if (iVar6 == 0) {
    iVar5 = iVar6;
  }
  return iVar5;
}

