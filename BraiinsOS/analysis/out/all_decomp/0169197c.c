// FUN_0169197c @ 0169197c size=2688 calls_out=6 calls_in=1
// strings: 

uint FUN_0169197c(byte *param_1,undefined *param_2,char param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_r4;
  undefined *puVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  
  if (param_2 != (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    do {
      if (param_1[(int)puVar5] == 0x3a) {
        if (puVar5 == (undefined *)0x0) {
LAB_016919dc:
          puVar4 = puVar5 + 1;
LAB_016919e0:
          if (puVar4 < param_2) {
            if ((char)param_1[(int)puVar4] < -0x40) goto LAB_016922f0;
            puVar3 = puVar4;
          }
          else {
            puVar3 = param_2;
            if (puVar4 != param_2) {
LAB_016922f0:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(param_1,param_2,puVar4,param_2,&DAT_01888dcc);
            }
          }
          if (puVar5 == (undefined *)0x0) goto LAB_01691a78;
          pbVar2 = param_1 + (int)puVar3;
          puVar3 = param_2 + -(int)puVar3;
        }
        else {
          if (puVar5 < param_2) {
            if ((char)param_1[(int)puVar5] < -0x40) goto LAB_0169231c;
            goto LAB_016919dc;
          }
          if (puVar5 != param_2) {
LAB_0169231c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(param_1,param_2,0,puVar5,&DAT_01888dbc);
          }
          puVar4 = param_2 + 1;
          pbVar2 = param_1;
          puVar3 = param_2;
          if (param_2 != (undefined *)0xffffffff) goto LAB_016919e0;
        }
        unaff_r4 = (undefined *)((*param_1 & 0xdf) - 0x41);
        if ((undefined *)0x19 < unaff_r4) goto LAB_01691a78;
        puVar6 = (undefined *)0x1;
        puVar4 = &DAT_004149d6;
        goto LAB_01691a50;
      }
      puVar5 = puVar5 + 1;
    } while (param_2 != puVar5);
  }
  uVar8 = 9;
  goto joined_r0x01691a84;
  while (puVar5 = puVar5 + 1, pbVar2 + (int)puVar5 != param_1 + (int)param_2) {
LAB_01691f48:
    if (pbVar2[(int)puVar5] == 0x23 || pbVar2[(int)puVar5] == 0x3f) {
      if (puVar5 != (undefined *)0x0) {
        if (puVar5 < puVar3) {
          if ((char)pbVar2[(int)puVar5] < -0x40) goto LAB_01692080;
        }
        else if (puVar5 != puVar3) {
LAB_01692080:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pbVar2,puVar3,0,puVar5,&DAT_01888ddc);
        }
      }
      if (puVar3 <= puVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(puVar5,puVar3,&DAT_01888dec);
      }
      bVar10 = pbVar2[(int)puVar5];
      puVar4 = puVar5 + 1;
      if ((puVar4 < puVar3) && ((char)pbVar2[(int)puVar4] < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar2,puVar3,puVar4,puVar3,&DAT_01888dfc);
      }
      pbVar7 = pbVar2 + (int)puVar4;
      unaff_r4 = puVar3 + -(int)puVar4;
      goto LAB_01692128;
    }
  }
  bVar10 = 0;
  pbVar7 = (byte *)0x0;
  puVar5 = puVar3;
LAB_01692128:
  if (puVar5 != (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
    do {
      if (pbVar2[(int)puVar3] == 0x2f) {
        if (puVar3 == (undefined *)0x0) {
          pbVar9 = pbVar2;
        }
        else {
          if (puVar3 < puVar5) {
            if ((char)pbVar2[(int)puVar3] < -0x40) goto LAB_0169217c;
          }
          else if (puVar5 != puVar3) {
LAB_0169217c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(pbVar2,puVar5,0,puVar3,&DAT_018adf70);
          }
          puVar5 = puVar5 + -(int)puVar3;
          pbVar9 = pbVar2 + (int)puVar3;
        }
        goto LAB_0169223c;
      }
      puVar3 = puVar3 + 1;
    } while (puVar5 != puVar3);
  }
  puVar3 = puVar5;
  puVar5 = (undefined *)0x0;
LAB_0169223c:
  uVar8 = FUN_01692d54(pbVar2,puVar3);
  if ((uVar8 & 0xff) != 0xb) {
    return uVar8;
  }
  if (puVar5 != (undefined *)0x0) {
    if (*pbVar9 != 0x2f) {
      return 4;
    }
    iVar1 = FUN_0169052c(pbVar9 + 1,puVar5 + -1);
    goto joined_r0x01692284;
  }
  goto joined_r0x0169229c;
  while (puVar5 = puVar5 + 1, pbVar2 + (int)puVar5 != param_1 + (int)param_2) {
LAB_01691d20:
    if (pbVar2[(int)puVar5] == 0x23 || pbVar2[(int)puVar5] == 0x3f) {
      if (puVar5 != (undefined *)0x0) {
        if (puVar5 < puVar3) {
          if ((char)pbVar2[(int)puVar5] < -0x40) goto LAB_01691d70;
        }
        else if (puVar5 != puVar3) {
LAB_01691d70:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pbVar2,puVar3,0,puVar5,&DAT_01888ddc);
        }
      }
      if (puVar3 <= puVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(puVar5,puVar3,&DAT_01888dec);
      }
      bVar10 = pbVar2[(int)puVar5];
      puVar4 = puVar5 + 1;
      if ((puVar4 < puVar3) && ((char)pbVar2[(int)puVar4] < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar2,puVar3,puVar4,puVar3,&DAT_01888dfc);
      }
      pbVar7 = pbVar2 + (int)puVar4;
      unaff_r4 = puVar3 + -(int)puVar4;
      goto LAB_01691ea4;
    }
  }
  bVar10 = 0;
  pbVar7 = (byte *)0x0;
  puVar5 = puVar3;
LAB_01691ea4:
  if (puVar5 != (undefined *)0x0) {
    if ((puVar5 != (undefined *)0x1) && (*(short *)pbVar2 == 0x2f2f)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004148ff,0xa7,&DAT_018adfc0);
    }
    iVar1 = FUN_0169052c(pbVar2,puVar5);
joined_r0x01692284:
    if (iVar1 == 0) {
      return 4;
    }
  }
joined_r0x0169229c:
  if (pbVar7 == (byte *)0x0) {
    return 0xb;
  }
  if (bVar10 == 0x3f) {
    pbVar2 = pbVar7;
    if (unaff_r4 != (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      do {
        if (pbVar7[(int)puVar5] == 0x23) {
          puVar4 = puVar5;
          if (puVar5 == (undefined *)0x0) {
LAB_016920d4:
            puVar4 = puVar4 + 1;
            if (puVar4 < unaff_r4) {
              if ((char)pbVar7[(int)puVar4] < -0x40) goto LAB_016921a4;
              puVar3 = puVar4;
            }
            else {
              puVar3 = unaff_r4;
              if (puVar4 != unaff_r4) {
LAB_016921a4:
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(pbVar7,unaff_r4,puVar4,unaff_r4,&DAT_01888dcc);
              }
            }
          }
          else {
            if (puVar5 < unaff_r4) {
              if ((char)pbVar7[(int)puVar5] < -0x40) goto LAB_016923e0;
              goto LAB_016920d4;
            }
            if (puVar5 != unaff_r4) {
LAB_016923e0:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(pbVar7,unaff_r4,0,puVar5,&DAT_01888dbc);
            }
            puVar3 = (undefined *)0x0;
            puVar4 = unaff_r4;
            if (unaff_r4 != (undefined *)0xffffffff) goto LAB_016920d4;
          }
          unaff_r4 = unaff_r4 + -(int)puVar3;
          pbVar7 = pbVar7 + (int)puVar3;
          goto LAB_016921e4;
        }
        puVar5 = puVar5 + 1;
      } while (unaff_r4 != puVar5);
    }
    puVar5 = unaff_r4;
    unaff_r4 = (undefined *)0x0;
    pbVar7 = &DAT_00000001;
  }
  else {
    puVar5 = (undefined *)0x0;
    pbVar2 = &DAT_00000001;
  }
LAB_016921e4:
  iVar1 = FUN_01690900(pbVar2,puVar5);
  if (iVar1 == 0) {
    return 5;
  }
  if ((param_3 == '\x01') && (unaff_r4 != (undefined *)0x0)) {
    return 7;
  }
  goto LAB_01692044;
  while( true ) {
    unaff_r4 = (undefined *)(uint)(byte)(&DAT_004149d6)[(char)*pbVar9];
    puVar6 = puVar6 + 1;
    if (((&DAT_004149d6)[(char)*pbVar9] & 1) == 0) break;
LAB_01691a50:
    if (puVar5 == puVar6) {
      if (puVar3 < (undefined *)0x2) {
        if (puVar3 == (undefined *)0x0) {
          return 0xb;
        }
      }
      else {
        unaff_r4 = (undefined *)0x2f2f;
        if (*(short *)pbVar2 == 0x2f2f) {
          pbVar2 = pbVar2 + 2;
          puVar3 = puVar3 + -2;
          pbVar9 = &DAT_00000001;
          if (puVar3 == (undefined *)0x0) {
            pbVar7 = (byte *)0x0;
            bVar10 = 0;
            puVar5 = (undefined *)0x0;
            goto LAB_0169223c;
          }
          puVar5 = (undefined *)0x0;
          goto LAB_01691f48;
        }
      }
      puVar5 = (undefined *)0x0;
      goto LAB_01691d20;
    }
    pbVar9 = param_1 + (int)puVar6;
    if ((char)*pbVar9 < 0) break;
  }
LAB_01691a78:
  uVar8 = 0;
  unaff_r4 = puVar4;
joined_r0x01691a84:
  if (param_3 != '\x02') {
    return uVar8;
  }
  if (param_2 < (undefined *)0x2) {
    if (param_2 != (undefined *)0x0) goto LAB_01691ab8;
    bVar10 = 0;
    pbVar7 = (byte *)0x0;
    puVar5 = param_2;
LAB_01691c40:
    iVar1 = FUN_0169052c(param_1,puVar5);
joined_r0x01691ff0:
    if (iVar1 == 0) {
      return 4;
    }
  }
  else {
    if (*(short *)param_1 != 0x2f2f) {
LAB_01691ab8:
      puVar5 = (undefined *)0x0;
      do {
        if (param_1[(int)puVar5] == 0x23 || param_1[(int)puVar5] == 0x3f) {
          if (puVar5 != (undefined *)0x0) {
            if (puVar5 < param_2) {
              if ((char)param_1[(int)puVar5] < -0x40) goto LAB_01691cbc;
            }
            else if (puVar5 != param_2) goto LAB_01691cbc;
          }
          if (param_2 <= puVar5) goto LAB_016922e0;
          bVar10 = param_1[(int)puVar5];
          puVar4 = puVar5 + 1;
          if ((puVar4 < param_2) && ((char)param_1[(int)puVar4] < -0x40)) goto LAB_01692330;
          pbVar7 = param_1 + (int)puVar4;
          unaff_r4 = param_2 + -(int)puVar4;
          goto LAB_01691b40;
        }
        puVar5 = puVar5 + 1;
      } while (param_2 != puVar5);
      bVar10 = 0;
      pbVar7 = (byte *)0x0;
      puVar5 = param_2;
LAB_01691b40:
      if (puVar5 < (undefined *)0x2) {
        if (puVar5 == (undefined *)0x0) goto LAB_01691c40;
      }
      else if (*(short *)param_1 == 0x2f2f) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_004148ff,0xa7,&DAT_018adfd0);
      }
      puVar4 = (undefined *)0x0;
      do {
        if (param_1[(int)puVar4] == 0x2f || param_1[(int)puVar4] == 0x3a) {
          if (puVar4 != (undefined *)0x0) {
            if (puVar4 < puVar5) {
              if ((char)param_1[(int)puVar4] < -0x40) goto LAB_01691bb0;
            }
            else if (puVar4 != puVar5) {
LAB_01691bb0:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(param_1,puVar5,0,puVar4,&DAT_01888ddc);
            }
          }
          if (puVar5 <= puVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(puVar4,puVar5,&DAT_01888dec);
          }
          puVar3 = puVar4 + 1;
          if ((puVar3 < puVar5) && ((char)param_1[(int)puVar3] < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(param_1,puVar5,puVar3,puVar5,&DAT_01888dfc);
          }
          if (param_1[(int)puVar4] != 0x2f) {
            return 4;
          }
          break;
        }
        puVar4 = puVar4 + 1;
      } while (param_1 + (int)puVar4 != param_1 + (int)puVar5);
      goto LAB_01691c40;
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -2;
    pbVar2 = &DAT_00000001;
    if (param_2 == (undefined *)0x0) {
      pbVar7 = (byte *)0x0;
      bVar10 = 0;
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = (undefined *)0x0;
      do {
        if (param_1[(int)puVar5] == 0x23 || param_1[(int)puVar5] == 0x3f) {
          if (puVar5 != (undefined *)0x0) {
            if (puVar5 < param_2) {
              if ((char)param_1[(int)puVar5] < -0x40) {
LAB_01691cbc:
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(param_1,param_2,0,puVar5,&DAT_01888ddc);
              }
            }
            else if (puVar5 != param_2) goto LAB_01691cbc;
          }
          if (param_2 <= puVar5) {
LAB_016922e0:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(puVar5,param_2,&DAT_01888dec);
          }
          bVar10 = param_1[(int)puVar5];
          puVar4 = puVar5 + 1;
          if ((puVar4 < param_2) && ((char)param_1[(int)puVar4] < -0x40)) {
LAB_01692330:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac();
          }
          pbVar7 = param_1 + (int)puVar4;
          unaff_r4 = param_2 + -(int)puVar4;
          goto LAB_01691dc0;
        }
        puVar5 = puVar5 + 1;
      } while (param_2 != puVar5);
      bVar10 = 0;
      pbVar7 = (byte *)0x0;
      puVar5 = param_2;
LAB_01691dc0:
      if (puVar5 != (undefined *)0x0) {
        param_2 = (undefined *)0x0;
        do {
          if (param_1[(int)param_2] == 0x2f) {
            if (param_2 == (undefined *)0x0) {
              pbVar2 = param_1;
            }
            else {
              if (param_2 < puVar5) {
                if ((char)param_1[(int)param_2] < -0x40) goto LAB_01691e10;
              }
              else if (puVar5 != param_2) {
LAB_01691e10:
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(param_1,puVar5,0,param_2,&DAT_018adf70);
              }
              puVar5 = puVar5 + -(int)param_2;
              pbVar2 = param_1 + (int)param_2;
            }
            goto LAB_01691fb4;
          }
          param_2 = param_2 + 1;
        } while (puVar5 != param_2);
      }
      param_2 = puVar5;
      puVar5 = (undefined *)0x0;
    }
LAB_01691fb4:
    uVar8 = FUN_01692d54(param_1,param_2);
    if ((uVar8 & 0xff) != 0xb) {
      return uVar8;
    }
    if (puVar5 != (undefined *)0x0) {
      if (*pbVar2 != 0x2f) {
        return 4;
      }
      iVar1 = FUN_0169052c(pbVar2 + 1,puVar5 + -1);
      goto joined_r0x01691ff0;
    }
  }
  if (pbVar7 == (byte *)0x0) {
    return 0xb;
  }
  if (bVar10 == 0x3f) {
    pbVar2 = pbVar7;
    if (unaff_r4 != (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      do {
        if (pbVar7[(int)puVar5] == 0x23) {
          puVar4 = puVar5;
          if (puVar5 == (undefined *)0x0) {
LAB_01691e50:
            puVar4 = puVar4 + 1;
            if (puVar4 < unaff_r4) {
              if ((char)pbVar7[(int)puVar4] < -0x40) goto LAB_01691f8c;
              puVar3 = puVar4;
            }
            else {
              puVar3 = unaff_r4;
              if (puVar4 != unaff_r4) {
LAB_01691f8c:
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(pbVar7,unaff_r4,puVar4,unaff_r4,&DAT_01888dcc);
              }
            }
          }
          else {
            if (puVar5 < unaff_r4) {
              if ((char)pbVar7[(int)puVar5] < -0x40) goto LAB_01692390;
              goto LAB_01691e50;
            }
            if (puVar5 != unaff_r4) {
LAB_01692390:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(pbVar7,unaff_r4,0,puVar5,&DAT_01888dbc);
            }
            puVar3 = (undefined *)0x0;
            puVar4 = unaff_r4;
            if (unaff_r4 != (undefined *)0xffffffff) goto LAB_01691e50;
          }
          unaff_r4 = unaff_r4 + -(int)puVar3;
          pbVar7 = pbVar7 + (int)puVar3;
          goto LAB_01692028;
        }
        puVar5 = puVar5 + 1;
      } while (unaff_r4 != puVar5);
    }
    puVar5 = unaff_r4;
    unaff_r4 = (undefined *)0x0;
    pbVar7 = &DAT_00000001;
  }
  else {
    puVar5 = (undefined *)0x0;
    pbVar2 = &DAT_00000001;
  }
LAB_01692028:
  iVar1 = FUN_01690900(pbVar2,puVar5);
  if (iVar1 == 0) {
    return 5;
  }
LAB_01692044:
  iVar1 = FUN_01690900(pbVar7,unaff_r4);
  uVar8 = 6;
  if (iVar1 != 0) {
    uVar8 = 0xb;
  }
  return uVar8;
}

